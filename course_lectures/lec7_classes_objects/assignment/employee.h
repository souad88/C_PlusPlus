
// header contain declaration  of class member&&its ATTFIBUTES (VARIABLES)&&&Prototype of functions(header of function)


#pragma once
#include <iostream>
using namespace std;
class Employee{
    private: //Employee informaion
    int id;
    string first_nam;
    string last_nam;
    float salary;
    string hired;
    
    public:
    Employee();//default_constructor
    
    //setters_method
    void set_first_nam(string fn);
    void set_last_nam(string ln);
    void set_id(int id);
    void set_salary(float s);
    //getters_method
    string get_first_nam();
    string get_last_nam();
    int get_id();
    float get_salary();
    string get_is_hired(); //return is this name of employee is hired or not

    //------------------
    void display(); //display information of employee
    void hire(); //removed employee 
    void fire(); //added employee


};











