//prog: TAXI_ and Friend_ want to know about where is the passenger_location now?
//location_of_the customer ->is the observable //subject
//TAXI //NOTIFied WITH LOCATION is the->observer1
//friend //NOTIFied WITH LOCATION is the->observer 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class observer
{
    public:
        observer(){}
        virtual void update()=0;
        

};
class subject
{
    
    public:
        virtual  void set_location(string)=0;
        virtual  string get_location()=0;
        virtual void attach_observer(observer &)=0;
        virtual void de_attach_observer(observer &)=0;
        virtual void notify_observer()=0;
};
class location_customer:public subject//([add&remove&notify] observers who want to know the new location of the customer)
{
    private:
        string customer_location;
        vector<observer*> o;
    public:
        
        
        void set_location(string location)
        {
                this->customer_location=location;
                cout<<"new location  "<<customer_location<<endl;
                notify_observer();
        
        }
        string get_location()
        {
                return customer_location;
        } 
        void attach_observer(observer &obser)
        {
                o.push_back(&obser);
        }
        void de_attach_observer(observer &obser)
        {
                o.erase(remove(o.begin(),o.end(),&obser));
        }
        void notify_observer()
        {
                for(auto *i:o)
                {
                        i->update();
                }
        }

};

class taxi:public observer //observer 1 of the location passenger
{
    private:
        location_customer *loc;
        
    public:
        taxi(location_customer *loc)
        {
            this->loc=loc;
        }
        void update()
        {
            
            cout<<"TAXI now know where is the customer "<<loc->get_location()<<endl;
        }
};
class friend_:public observer //observer 2 of the customer location
{
    private:
        location_customer *loc;
    public:
        friend_(location_customer *loc)
        {
              this->loc=loc;  
        }
        void update()
        {
            cout<<"I am Saldina your friend ! now i know your location "<<loc->get_location()<<" i will come to you "<<endl;
        }    
};
int main()
{
    location_customer loc;
    taxi tx(&loc);
    loc.attach_observer(tx);
    loc.set_location(" in new capital city road ");
    friend_ Saldina(&loc);
    loc.attach_observer(Saldina);
    loc.set_location("in the North Cost street ");
    
     return 0;
}
