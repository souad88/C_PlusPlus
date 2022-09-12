//Move semantic: is amethod that moves a content from Object of class to another Object,
//the data in the old object is removed , and the same data moved into the new object
// it means that we will use here the Right-Value (pass it by reference &&)
//also it used to pass object of class from main and change it is value

//notic: we have to pass a L-VAL to L-val but its not ok to pass a R-val to L-val
// ex:- 
      // void printval(int &num){  //&num:l-val
     //                                cout<<"val is ="<<num}  
     //int main(){ 
     //   int a=20; // a:l-val ,20:r-val
     //   printval(a); //it is ok passing L-val to L-val      
     //   printval(20); //it is not ok to pass R-val to L-val  
     //    return 0; }


#include<iostream>
#include<vector>
using namespace std;

//void function1(vector<int> &v){}


void function1(vector<int> &&v){
 v={2,3,4,5,6};
 }
int main(){

 vector<int> vect ={1,2,3,4,5};
  //function1(vect); //if we want to just pass vector values  
  function1(move(vect)); //we have to use move if we want to change values in vector ,,we use && to change R-value   
  return 0;
}