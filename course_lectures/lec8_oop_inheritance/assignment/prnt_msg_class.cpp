//Exercise 2
//Write a program with a mother class and an inherited daugther class.
//Both of them should have a method void display ()
//that prints a message (different for mother and daugther).
//In the main define a daughter and call the display() method on it.
#include<iostream>
#include<string>
using namespace std;
class main_c{
    public:
     void display(int i)
      { cout<<"Hellow this is the mother class"<<endl; // <<endl;
     }
 //friend void display();
 
};
class daughter_c:public main_c{
  public:
  void display()
     { cout<<"hellow this is a duaghter class"<<endl;}
};

int main(){
   daughter_c d;
   main_c m;
 int i=1;
   m.display(i);
   d.display();
 
    return 0;
}