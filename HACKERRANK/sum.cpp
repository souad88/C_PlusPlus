#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
 // Hint: Type return a+b; below:
 if (a>=1&&b<=1000)
 {
 return a+b;
 }
 else  {
      return 0;
       }
 }

int main() {
  //define two var  
  int num1; 
  int num2;   
  int sum; //define sum_var
  cout<<"Enter number 1 = "<<endl;
  cin>>num1;
  cout<<"Enter number 2= "<<endl;
  cin>>num2;
  
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
