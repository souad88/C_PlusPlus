   
//Only implementation of the functions in the class&&AND Call the functions through name of Class,ex: void class_name::function_name(string ...){}
//we can use all private variable section in this file also


#include "employee.h"
#include<iostream>
#include<string>
using namespace std;
Employee::Employee(){
 cout<<"Start"<<endl;
 }

//setters
void Employee::set_first_nam(string s)
{
    this->first_nam=s;
}
void Employee::set_last_nam(string l)
{
    this->last_nam=l;
}
void Employee::set_id(int i)
{
    this->id=i;
}
void Employee::set_salary(float sa)
{
    this->salary=sa;
}
//getters
string Employee::get_first_nam()
{
    return first_nam;
}
string Employee::get_last_nam()
{
    return last_nam;
}

int Employee::get_id()
{
    return id;
}
float Employee::get_salary()
{
    return salary;
}
string Employee::get_is_hired()
{ cout<<"is "<<first_nam<<"  "<<last_nam<<" hired ?? yes/no"<<endl;
 cin>>hired;
 return hired;
}
void Employee::hire(){
 cout<<" The employee is hired "<<endl;
 
 }
void Employee::fire(){
  cout<<"the employee is fired"<<endl;
  
 }

void Employee::display(){ //display info of hired employee
 cout<<"employee_name"<<first_nam<<"  "<<last_nam<<endl;
 cout<<"employee_id  "<<id<<endl;
 cout<<"employee_salary "<<salary<<endl;
 cout<<"Employee hired :-" <<hired<<endl;
}

