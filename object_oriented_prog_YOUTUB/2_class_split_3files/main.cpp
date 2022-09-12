//Client code : contain the main code, should be stord as main.cpp
//<<How to Compile this file>> : g++ main_file_nam.cpp seconed_file.cpp -o file_name      <ENTER_KEY>
// ./file_name  <Enter_key>
//
#include<iostream>
#include<string>
#include "headr.h"
int main()
{ car cc;
cc.set_maker("Honda");
cc.set_model(2018);
cout<<"this car is "<<cc.get_maker()<<" and Model : "<<cc.get_model()<<endl;

}