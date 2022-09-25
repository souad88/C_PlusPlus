//REF-with modifications:Christopher Okhravi 
//link :https://www.youtube.com/watch?v=_BpmfnqjgzQ&t=1964s
//-------------------------------------------------------------------
//write a programe to display Weather-Temperature-State , Using the Observer-Design-Pattern
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;



class Iobservers
{
    public:
    virtual void update()=0;

};
class Iobservable
{ 
  public:  
  virtual void add(Iobservers* observer_)=0;
  virtual void remov(Iobservers* _observer)=0;
  virtual void notify()=0;

};

class observable_weather_station:public Iobservable
{ private:
      vector<Iobservers*>observer; 
      int j;
 public:
      observable_weather_station(){}
      virtual void add(Iobservers *observer_)
         { observer.push_back(observer_);
    
          } 
      virtual void remov(Iobservers *_observer)
          { for(int i=0; i<sizeof(_observer);i++)
             {     if (observer[i]=_observer)
                   {
                       int j=i-1;
                       }
            
             }
     observer.erase(observer.begin()+j); //erase: takes position of element that wanted to be removed 
       }

 virtual void notify() // we have to update every observer , (update is a method in observer-classes that 
     {                    //will call the method of the new things like a temperature method ) 
         for(auto o:observer)
              {
               o->update();
               }

 }      
 float temperature() //the method that will take the new temperature
 {                  //update methode in the observer-classes will call the method of temperature    
    
       float temp;        
      cout<<"what is the temperatur now ?!";
      cin>>temp;
       return temp;
 }
};
class PhoneDisplay_observer_1:public Iobservers
{       observable_weather_station *state; //we have to create a composition or Aggregation relationship with the
                                        //observable class to be able to call temperature method                           
       public:
              PhoneDisplay_observer_1(){}
             PhoneDisplay_observer_1(observable_weather_station *stat)
              {   
                this->state=stat;
              }  
          void virtual update()//we will call temperature method in the update method
              {     float temp;
                    temp=state->temperature();
                  cout<<"temperature now ="<<temp<<endl; 
          }


};
int  main()
{ 
     Iobservers *phone_diplay;//Define the first observer of phone display observer to interface of observers-class
     PhoneDisplay_observer_1 phone;
     phone_diplay=&phone; //match interface-class of observer and  implementation class of observer
 
      Iobservable *observable; //define the observable
      observable_weather_station station;
      observable=&station;//match the interface of observable with observable implementation class
      observable->add(phone_diplay);//add one observer in observable
      observable->notify();
       return 0;
}
