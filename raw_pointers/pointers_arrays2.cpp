//creat  array and send it as a array of pointers to a method that print this array and adding number 3 to
//its elements 

#include <iostream>
#include<array>
using namespace std;

//int max=5; //number of array
int main (){
  //double varray[max]={1,2,3,4,5};
 array<double,5> varray={1.2,2.5,3.4,4.6,5.1};
 void centimize(array<double,5>* ); //define a function called centimize that takes pointer to array of type double
 centimize(&varray);
 
  return 0;
  }
 void centimize (array<double,5>*varray)
  { 
      for(auto i:*varray)
      {
          cout<<i<<endl;//print double array
      }
      for(auto j:*varray)//(->) not(.) because varray is apointer 
      {    //cout<<varray[j]<<endl;
           j+=3;//derefernce operator it is look like j=*varray
           cout<<"value of j=  "<<j<<endl;
           cout<<"value of &j=  "<<&j<<endl;
      }
  }