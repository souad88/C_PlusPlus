//Observer-class: ->include the interface of ubdating in the SUBJECT class for objects(objects are the things that the 
//observers should know every New changes about them )
//it have a object from class subject
//it will be the abstract class
#include<iostream>
#include<vector>

class observer{
    public:
    virtual ~observer(){};
    virtual int getstate()=0;
    virtual void update(subject *subject)=0;//pure virtual func
};
//Concret-Observer-Class: 1-store state of inter-set
//                        2-Send notifications to its observers when the state changes

class ConcreteObserver:public observer
{   private:
     int observer_state;
    public:
     ~ConcreteObserver (){};
     ConcreteObserver(const int state):observer_state(state){};//initializer constructor the take state from main 
     int getstate()
     {
        return observer_state;
     } 
     void update(subject *subject); //header of pure virtuall function
     

//Subject-Class : 1- Include an interface of observers(add-remove-notify  observers)
class subject 
{   private:
    vector<observer*>observers;
    public:
    virtual ~subject(){};
    void attach(observer *observer)
    {

    }
}; 

};
