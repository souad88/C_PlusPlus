#include <iostream>
#include<memory>
using namespace std;

class employe
 {   string name;
     shared_ptr<employe>pt;
     
      public:
      employe (){}
      employe(shared_ptr <employe>sh )//pass shared ptr &intialize constructor
      { pt=sh;//copy of shared ptr into shared pointer in the class
        pt->name="sandy";
      }
      friend ostream &operator<<(ostream &cout,const employe &em);
      void print()
      { 
        cout<<"name"<<name<<endl;
      }
 };



ostream &operator<<(ostream &cout,employe &em)
  { 
    
    cout<<em.print()<<endl;//???????????????????????????????????/
    
    //cout<<em.print()<<endl;
    return cout;          
  }
int main()
 {  {
   shared_ptr <employe> sh1= make_shared<employe>();
   cout<<"counter of shared pointer1 before end of scope=  "<<sh1.use_count()<<endl;
   
   //cout<<sh1->print();
   //cout<<"print function in class via shared pointer   "<<print()<<endl;
   }
   
   shared_ptr<employe>sh=make_shared<employe>();
   //employe emp();
   employe em(sh);
   
   cout<<em;
   
   //cout<<"counter of shared pointer1 after end of scope= "<<sh1.use_count()<<endl; //it cannote be used becuase it was destructed
 }
