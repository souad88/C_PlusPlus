#include<iostream>
using namespace std;

//Subject class:abstract class
class subject{
    public:
    virtual void nam()=0;
    virtual void idd()=0;
    virtual void ag()=0;
};
//real subject class :all methods
//relationship between subject&real_sub :is inheritance
class real_sub:public subject{ 
    private:
    string name;
    float age;
    int id;
    
    public:
  void nam()
    {  cout<<"enter Employee name"<<endl;
        cin>>name;
       
    }
  void idd()
     {
        cout<<"enter employee id"<<endl;
        cin>>id;
     }   
  void ag()
     {
        cout<<"enter age of Employee"<<endl;
        cin>>age;
     }
 
};
//3-proxy class: relation between proxy &subject is inheritance ,,relation between proxy &real_sub is aggregtion weak composition
class proxy:public subject{
    
     private:
    //if we defined subject *rs=new real_sub >>>>>>it will
    subject *rs;//=new real_sub();//aggregation->weak composition
    
    public:
    proxy(){
      rs=new real_sub();
    }
    ~proxy(){delete rs;}
   void nam()
    {  rs->nam();
    }
   void idd()
     {
        rs->idd();
     }   
  void ag()
     {
       rs->ag();
     }

    
    
};

int main()
{ subject *su= new proxy(); //pointer of type (parent class subject ) point to (child class proxy)
//proxy *su=new proxy();
 su->nam(); 
 return 0;
}