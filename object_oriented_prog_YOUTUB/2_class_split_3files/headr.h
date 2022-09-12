// header contain declaration  of class member&&its ATTFIBUTES (VARIABLES)&&&Prototype of functions(header of function)
// في الفيل دا بوضح الكلاس بتاعتي فيها ايه سواء من متغيرات او اسماء دوال بس وبوضح الدوال دي بتاخد ايه وهترجع بايه فقط

#pragma once
#include<iostream>
#include<string>
using namespace std;

class car{
 private:///declarattion of Calss Attributes////////////
 string maker;
 int model;
 string color;
 
 public://///PRototype of functions
 void set_maker(string m);
 string get_maker();
 void set_model(int mod);
 int get_model();



};