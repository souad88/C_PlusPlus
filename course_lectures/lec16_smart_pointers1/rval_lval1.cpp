// R-value : is the  value in the right of asign 
//L-value :is the value in the left of the sign
//EX: int a=10; 
//[a]... is the left value , and it have a location and store at the memory , we can asign any value at it.
//[10]... is the right value , and it is not astore and havnnot any location at the memory , we cannot asign 
    //any value in it

////EX:
#include<iostream>
using namespace std ;
 //int getvalu()
 //{
   // return 10;
 //}
int& d(){ //return reference
  static int a =20; //it must be a static
  return a;
 }
 void num (int &num)
 {
  cout<<"the left value>>"<<num<<endl;
 }
 void num(int &&num){
  cout<<"the right value>>>"<<num<<endl;
 }
 int main()

 { //EX-1:
    int i=20; 
 //i is the left val ,20 is the right val
 //20=i;    //it will be a ERROR becuase we cannot asign in a R-VALUE
 //EX-2:
 //ALSO this is a error :
  //getvalu()=5; //because getvalu() is a function that return a rightvalu =10
  //EX-3:   
   d()=20;  //  here we can assign a value at a R-VALUE ...because the func-d() we return the right-val with the reference
   cout<<d();


//If we want to send a Right value and Lvalue with reference we will do it:-
//Left value : we send it in the method by reference _>>>>> int num (int &n){}
//Right value: we send it in the method by reference to Right-value>>>int num (int &&n){}
//ex:
 int v=10;
 num(v);
 num(10); //the method cannot take a Right-value by reference ,but it can take it -> void num(int n)>>>>without reference becuase the right value havnnot any address or reference
 
 return 0;
 
 }

