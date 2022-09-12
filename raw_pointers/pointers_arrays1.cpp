//creat apointer that point to elements of array of 4-elements give these elements values
//then allocat this number 55 in the first element in the array by thpointer 

#include<iostream>
#include<array>
using namespace std;
int main(){
 array<int,4> num={2,3,1,4};
 int *ptr;//pointer to array
 ptr=&num[0];//pointer point to the first element of the array

 for(int i=0; i<num.size() ; i++)
 {if(i==0) //allocat another value at the first elemennt of the array
   {
    *ptr=55;
   }
  ptr=&num[i];
   cout<<"&(num[i])= "<<&(num[i])<<"      "<<"&num[i]= "<<&num[i]<<endl;
   cout<<"the value of  pointer ptr"<<i<<"= "<<ptr<<endl;
   cout<<" --value in *ptr"<<i<<" = "<<*ptr<<endl;
 } 
 /////
 

 
    return 0;
}