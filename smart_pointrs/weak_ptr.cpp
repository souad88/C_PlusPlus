//shared pointer have aproplem : every copy of sh_ptr will have the same locatation at the memory
//but the weak  pointer will destroy the pointer when the programe donnot need to use it
//weak pointer just organized the shared pointer

#include<iostream>
#include<memory>
using namespace std;
int main(){

 weak_ptr<int>wp1;
  { 
     shared_ptr<int>sh1=make_shared<int>(25); //allocat 25 byte in heap memory
      wp1=sh1;//we put the shared pointer in the weakpointer
   
  }
 
    
    return 0;
}