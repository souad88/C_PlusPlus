//INPUT OPERATOR >>:
//DEFINITION: outside the class: istream &operator >>(istream &inpt, student &st){
//                                                                         inpt>>st.name;
//                                                                          inpt>>st.age;
//                                                                      return inpt;
//                                                                         }
//-Inside the class : make the input stream method as afreind to the class
//
#include <iostream>
#include <string>
using namespace std;
class student
{ 
private:
  string name ;
  float age;
public:
  //student():name(0),age(0)
  //{}
 friend istream &operator>>(istream &inpt,student st);

};
istream &operator >>(istream &inpt,student st)
{
    cout<<"Enter the student name"<<endl;
    inpt>>st.name;
    cout<<"Enter the student age"<<endl;
    inpt>>st.age;
    return inpt;
}
int main(){

 student stud1;
 cin>>stud1;
    return 0;
}