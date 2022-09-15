
//ref: opject_oriented_programming in C++ by Rober-Lafore
//Write a prog with a function that  order two numbers ascending using pointers

#include<iostream>
using namespace std;
int main()
{
    int n1=99; int n2=11; //two couple of numbers
    int n3=22; int n4=88; //seconed couple of numbers
 cout<<"un-ordered number list 1"<<n1<<" "<<n2<<endl;
 cout<<"un-oredered number list2 "<<n3<<" "<<n4<<endl;

    void order(int *,int *); //declare a function Order that takes two pointers
    order(&n1,&n2); //pass two numbers by address
    order(&n3,&n4);
cout<<"ordered number list1"<<n1<<" "<<n2<<endl;
cout<<"ordered number list2 "<<n3<<" "<<n4<<endl;
    return 0;  
}
void order(int *n1,int *n2)
{ int temp;
    if (*n1>*n2)
    { temp=*n1;
      *n1=*n2;
      *n2=temp;
     }
   
}