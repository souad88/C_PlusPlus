
//Client code : contain the main code, should be stord as main.cpp
//<<How to Compile this file>> : g++ main_file_nam.cpp seconed_file.cpp -o file_name      <ENTER_KEY>
// ./file_name  <Enter_key>
//
#include "employee.h"
#include<iostream>
#include <string>
using namespace std;
int main()
{ 
  string f,first,seconed;
  Employee e1;
  int id;
  float salary;
 
 cout<<" enter first name of employee"<<endl;
 cin>>first;
 e1.set_first_nam(first);
 cout<<"enter last name of employee"<<endl;
 cin>>seconed;
 e1.set_last_nam(seconed);
 f=e1.get_is_hired();
 
 
 if (f=="yes")
    {
        e1.set_id(id);
        e1.set_salary(salary);
        e1.display();
             
    }
 return 0;   
}