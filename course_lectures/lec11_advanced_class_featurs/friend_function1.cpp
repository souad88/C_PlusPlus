//Afriend function of aclass , is afunction that defined outside the class and this function can access the 
//private and the protected sevtions in the calss
//how to write: class name{
//                   Friend   ReturnTypefunction   functionNam   (Class name   Object of class){
//                         
//                                                                                                   }
//                        };
//definition of friend function outside class
//: ReturnTypeFunction FunctionNam (class name  Opject name){
//}
///////NOTTTTTTICE:: the friend function only access private section of class through [Object of class]
#include <iostream>
#include<string>
using namespace std;
class person{
    private:
    string n;
    float age;

    public:
    person(string nn,float ag)
    { this->age=ag;
    this->n=nn;
    }
    
    string get_name()
    {
        cout<<"the name of person"<<n<<endl;
        return n;

    }
  float get_add()
  {
    cout<<"address of person"<<age<<endl;
    return age;
  }
 friend void print(person p);//creat aheader of afunction-friend and creat an object P of class Person in the function arguments
   
};
void print(person p)
{
    cout<<"the information inside Class person from afriend function outside the class"<<endl;
    cout<<"the name of the person "<<p.get_name()<<endl;
    cout<<"the address of the person"<<p.get_add()<<endl;
}
int main()
{

    person pp("sara",20);//pass infor to constructor of class person
    print(pp);//print opject pp
    return 0;

}