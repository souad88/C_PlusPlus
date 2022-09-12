//Only implementation of the functions in the class&&AND Call the functions through name of Class,ex: void class_name::function_name(string ...){}
//we can use all private variable section in this file also
#include "headr.h"
#include<iostream>
#include<string>
using namespace std;
void car::set_maker(string m) // Call method set_maker through class name CAR
{
    this->maker=m;
    //cout<<"the Maker is :"<<m<<endl;
 
}
string car::get_maker()
{
    return maker;
}
void car::set_model(int mod)
{
    this->model=mod;
}
int car::get_model(){
    return model;
}
