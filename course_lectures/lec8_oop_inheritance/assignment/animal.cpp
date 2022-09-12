//Exercise 3
//Write a probram with a mother class animal. Inside it define a name and an age variables,
// and set_value() function.
//Then create two bases variables Zebra and Dolphin which 
//write a message telling the age, the name and giving some extra information (e.g. place of origin).

#include<iostream>
#include<string>
using namespace std;

class animal{
    protected:
    string name;
    string area;
    float age;
    public:
    animal(){}//DeFAULT CONSTRUCTOR
    animal(string n , string ar, float ag):name(n),area(ar),age(ag){}
    void set_valu(){
        cout<<"The name of the animal is " <<name<<endl;
        cout<<"The age of  "<<name<<" is "<<age<<endl;
        cout<<"The area of life of  " <<name<<" is "<<area<<endl;
    }
};
int main(){
 animal Zebra ("Zebra","The jungle",12);
 Zebra.set_valu();
 animal Dolphine("Dolphine","the Ocean",14);
 Dolphine.set_valu();
    return 0;
}