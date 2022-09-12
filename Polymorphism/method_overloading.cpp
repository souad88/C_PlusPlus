//polymorphism:1-Compile time polymorphism:method overloading
//             2-Run time polymoriphsm: Method Overriding

#include<iostream>
using namespace std;

    
void m(int b)
    {
        cout<<"first function= "<< b<<endl;
    }
  
double m(){
     double s=20;
        cout<<"overloaded function"<<endl;
        return s;}


int main(){
int a=10;
 m(a);
 cout<<m()<<endl;//print the secon function 
    return 0;
}