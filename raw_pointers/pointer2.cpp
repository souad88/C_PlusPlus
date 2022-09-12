#include<iostream>
using namespace std;
int main(){
 int var1=20; //var1 with value 20, and with address &var1
 int *ptr1;//define pointer1
 ptr1=&var1;
 cout<<"(var1_value)="<<var1<<"  //(var1_address *ptr1)="<<ptr1<<"  =  (var1_address &var1)="<<&var1<<endl;
 cout<<"(address of pointer 1)"<< &ptr1<<endl;
    
 cout<<"address of pointer 2 &ptr1="<<&ptr1<<endl;

return 0;
}