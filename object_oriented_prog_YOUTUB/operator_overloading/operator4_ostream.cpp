//OSTREAM operator is OUTput and INPUT << ,>>
//<<:Extraction _operator
//>>:Stream insertion
//We need it when we want to enter or print Objects from class in the main program
//Description of stream input and output : 1- Output_Stream << :- we define the overloaded method of output stream
//                                                            outside the class 
//        we will use these keywords : [OSTREAM &OPERATOR <<] is the name of output operator method
// we will pass the output operator << with a type called OSTREAM  and will pass an object of a class
// EX:- ostream &operator <<(ostream &out , student &stu) {} , where class name is student and object class is stu  
// we will use (out) variable to print :ex: ostream &operator <<(ostream &out,student &stu ){
//                                                                 out<<"student name"<<stu.nam<<endl;
//                                                                 out<<"student age"<<stu.age<<endl;                         
//                                                                  return out;
//                                                                                                 } 
// At the class we will make the OSTREAM OPERATOR << AS A-(((FREIND)))  TO THE CLASS

#include<iostream>
#include<string>
using namespace std;
class strm //class to ouptut or input objects
{ private:
  string name;
  float age;
 
 public:
 friend ostream &operator <<(ostream &output,strm &op);
 //friend ostream &operator >>(ostream &inpt,strm &ip);
 strm():name(),age(0)
 {}
 strm(string nm,float ag):name(nm),age(ag)
 {}
/*ostream &operator << (ostream& output,strm& op)
 { output<<op.name<<endl;
    return op;
 } */

};
ostream &operator <<(ostream &output,strm &str) 
{
    output<<"the user name is"<<" "<<str.name<<endl;
    output<<"the user age is"<<" "<<str.age<<endl;
    return output;
}
int main ()
{
 strm str("sally",30);

 cout<<str<<endl;
    return 0;
}