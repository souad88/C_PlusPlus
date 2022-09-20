#include <iostream>
#include<array>
using namespace std;
int main()
{
    

 int arr[3] = {1 , 2 , 3};
 int(*p)[3]; //pointer points to all of the array
 p = &arr; 
 cout <<"*p"<<*p<<endl;
 //Access address
 cout<<p[0]<<endl;
 cout<<p[1]<<endl;
 cout<<p[2]<<endl;
 cout<<"_________________________"<<endl;
 //Access elements in array through pointer
 cout<<"To access elements in array through pointer p[0][0],p[0][1]"<<endl;
 cout<<p[0][0]<<endl;
 cout<<p[0][1]<<endl;
 cout<<p[0][2]<<endl;
 //--------------------------
 cout<<"_____________________________"<<endl;
 //pointer points to one elements of array
 int arra[3]={1,2,3};
 int *ptr;
 ptr=&arra[0];
//Access element of elements at array
 cout<<ptr[0]<<endl;
 cout<<ptr[1]<<endl;
 cout<<ptr[2]<<endl;
//Access array in array 
 cout<<&ptr[0]<<endl;
 cout<<&ptr[1]<<endl;
 cout<<&ptr[2]<<endl;
 cout<<"__________________________"<<endl;
int s[]={};
}
