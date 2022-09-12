#include<iostream>
#include<memory>
using namespace std;
void shrd_good(shared_ptr<int>&shr) //&shr is alliace of object shr in shared ptr
{ cout<<"count reference =: " <<shr.use_count()<<endl;
  shr.reset(new int (2011)); //assign anew value in the object shr
 cout<<"count reference=:"<<shr.use_count()<<endl;

}
void shrd_bad(shared_ptr<int>&shr)
 {

 }
 int main(){

    int value=1988;
    auto first_shar=make_shared<int>(value);
    auto sec_shar=first_shar; //copy of first shared pointer, it will count =2 
    cout<<"count of first shared ptr="<<first_shar.use_count()<<endl; //count=2
    cout<<"count of seconed shared ptr="<<sec_shar.use_count()<<endl; //count =2
    shrd_good(first_shar); //first call of ptr 
    cout<<first_shar.use_count()<<endl; 
    cout<<sec_shar.use_count()<<endl;
    shrd_good(first_shar);//seconed call of ptr
    cout<<first_shar.use_count()<<endl;
    shrd_good(first_shar);
 return 0;

 }