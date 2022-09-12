/*variables in function can be passed by 3 ways:
                       1- by valu: take a copy of a value;
                       2- by Ref of val: take value and can modify it;
                       3-by conct Ref: value cannot be changed and it will be a const


                       */


  ///creat prog to pass by const ref in function
#include<iostream>
using namespace std;
 void f1(int x)//pass by val
 {
   x=x+1;
 } 
 void f2(int &x)   //pass by ref
 {
    x=x+1;
 }                    
 void f3(const int &x) //pass by const ref
 {
    //x=x+1; -> we canot modify on it it is now aconstant
    cout<<"x="<<x<<endl;
 }
 void f4(int *x)
 {
    x=x+1;
 }
 int main()
 {
    int y=5;
    f1(y);
    f2(y);
    f3(y);
    f4(&y);
    return 0;
    
 }