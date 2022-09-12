// a smart pointer is a container of smart pointers


#include<iostream>
#include<memory>
using namespace std;

class unpointer{
    public:
    unpointer(){ 
      cout<<"Invoked Created of UN_PTR "<<endl;
      }
    ~unpointer(){
      cout<<"Invoked destroyed"<<endl;
     }  
};

int main (){
//1-Unique_ptr :not shared pointer,we cannot copy it    
unique_ptr<int> unptr1= make_unique<int>(25); //stored in heap memory//(25) avalue of this
///------How Moving OwnerShip of Unique_ptr to another one??----------------------////
//if we do to move the ownership from unique pointer1 to a unique pointer 2 we cannot make it as this:
//unique_ptr<int>unptr2=unptr1 // we cannot move the ownership from unique_ptr to another so it isnot shared pointr
//but we can move the ownership :
unique_ptr<int> unptr2=move(unptr1); //move ownership by this 
cout<<"unique pointer 1"<<*unptr1<<endl;
cout<<"unique pointer 2"<<*unptr2<<endl;
//-------how to make the unique pointer to point to aconstructor ?-------//////
//1- creat aclass and name it , creat a constructor and deconstructor
//2- creat aunique pointer , and make the type between this <> to be the name of the class

unique_ptr<unpointer>unptr3=make_unique<unpointer>(); //this will call constructor and deconstructor //()avalue that passed to the class



return 0;
}//at the last curly prnthis it will call destructor and destroy the unique_pointer ,between the scop it will excute
//the code untill reach the last curly pranthies  then it will destroy the pointer