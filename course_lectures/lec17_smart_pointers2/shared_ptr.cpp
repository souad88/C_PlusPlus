#include <iostream>
#include<memory>
using namespace std;

class employe
 {   string name;
     
     
      public:
      //employe(){}
      employe()
      { 
        name="sandy";
      }
      void print()
      { 
        cout<<"name"<<name<<endl;
      }
 };



int main()
 {  {
   shared_ptr <employe> sh1= make_shared<employe>();
   cout<<"counter of shared pointer1 before end of scope=  "<<sh1.use_count()<<endl;
   
   //cout<<sh1->print();
   //cout<<"print function in class via shared pointer   "<<print()<<endl;
  {
  shared_ptr<employe>sh2=sh1;
  sh2->print();
  cout<<"counter reference before end scope of copy2 of shrd1"<<sh1.use_count()<<endl;
  }
  cout<<"counter ref of shrd_ptr after end of scope of copy 2"<<sh1.use_count()<<endl;  
  }
   
   
   //cout<<"counter of shared pointer1 after end of scope= "<<sh1.use_count()<<endl; //it cannote be used becuase it was destructed
 }
