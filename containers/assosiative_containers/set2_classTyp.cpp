#include<iostream>
#include<set>
#include<string>

using namespace std;


class person
{ public:
    string nam;
    float age;

 bool operator <(const person& rhs)const{return age<rhs.age;
 }
bool operator>(const person &rhs) const
};
int main()
{
    set<person>w={{"saly",15},{"randa",20}};//Define A set of type of Class person
    //string na=
    for ( auto&n:w)
    {
        cout<<"the name of person"<<n<<endl; //we must creat overload operator because we deal with class 
    }
return 0;
}