#include<iostream>
using namespace std;
class singleton{
public:
static singleton *instance1(); //public global instance of singleton class
private:
singleton(){} //default constructor
singleton(const singleton &){} //copied or parametrized constructor
static singleton instance2;
};
static singleton::instance2;
singleton *singleton::instance1(){
    if(!instance2){
        instance2= new singleton();
        cout<<"getinstance():firstinstance"<<endl;
        return instance2;
    }
    else{
        cout<<"getinstance():previous instance"<<endl;
        return instance2;
    }
}
int main(){
 singleton *d=new singleton::instance1();
    return 0;
}