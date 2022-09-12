//shared pointers : can shar it's ownership to multiple shared pointers

#include<iostream>
#include<memory>
using namespace std;

class shared_pointer{
      public:
      shared_pointer()
      {
        cout<<"invoked created"<<endl;
      }
      ~shared_pointer()
      { 
        cout<<"invoked destroyed "<<endl;
      }
};
int main()
{//2-shared pointer:
  shared_ptr<shared_pointer> shr1=make_shared<shared_pointer>(); //how to creat shared ptr
  cout<<"shared counter   "<<shr1.use_count()<<endl;
  
  {   //creat another shared_pointer and move the owner ship(copy sh_ptr1) from sh_pointer1 to sh_pointer2
      //put the new copy between scop , at the end of the scop the prog will destroy the 2nd copy
      shared_ptr<shared_pointer>shr2=shr1; //shr2=shr1 
     //counter of shr2 =2 -> cuase there 2 copy from the same sh_pointer
     cout<<"shared counter  "<<shr1.use_count()<<endl;
  }    //at the end of this scope it will destroy the seconed copy of shr_ptr
   
   cout<<"shared_counter  "<<shr1.use_count()<<endl; //counter =1 becuase there is a one sh_ptr
   //--------------------------------
     
    return 0;
}