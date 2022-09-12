//Friend classes: 
//class A{
//    
//    Friend class B;     
// };
//class B {
//
//   };
//if class B is afriend to class A thats mean :class B can access all private sections of classA ,
//but class A cannot access the private section in class B THrough creating object from class a in class b,,,
//Notttttttttttttttice :class B is just AFRiend to class A  but cannot Inheritance from it 
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
friend class print; ///friend class PRINT header in Class PRINT
   
};
class print{/////Class PRINT
    public:
    void printt(person p)//fUNCTION INT THE CLASS WITH PARAMETERS ->OBJECT OF CLASS PERSON
    {
       cout<<p.get_name()<<" and the "<<p.get_add()<<endl;
    }
};
int main()
{person per("samir",30);//Object of first class
 print pr;//object of seconed class
 pr.printt(per);//sending object of class person to class print
return 0;   
}