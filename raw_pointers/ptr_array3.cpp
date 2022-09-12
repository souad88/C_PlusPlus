//creat an array and send this array by address to a non return type function that modified this array by adding
//+2 to the elements of the array by dereference operator


#include<iostream>
#include<array>
using namespace std;

//int s_array=3; //number of elements of array

int main()
{void ptr (int *); 
 
 
 array<int,3> num={};
 
 for(int i=0;i<3;i++)
 { cout<<"enter the element number_"<<i<<"_of the array"<<endl;
   cin>>num[i];  
 }
 ptr(&num[3]);//send by address as apointer
 
return 0;
}
void ptr(int *pp)
{ for(int j=0;j<3;j++)
  { *pp=*pp+2; //dereference operator *pp because we send as the pointer(send by address)
     cout<<"value of array by the pointer after modified = "<<*pp<<endl;

  }
  
}