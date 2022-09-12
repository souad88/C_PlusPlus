
//prevent convert types in constructor implicitly


#include<iostream>
using namespace std;
class Foo {
public:  
//implicit convert types in constructor FOO() from int variables to char variable-> there isot be any error in compile
    Foo(int n){}; // contructor allocates n bytes to the Foo object
    Foo(const char *p)  // constructor initialize object with char *p
    {}; 


    
};
class fooo{

    public: //Explicit_constructor :Prevent implict conversion  from type to another EX:
    explicit fooo(int n){}; //Explicit means that constructor FOO will take data type of INT only 
                           // so it will be error in compiler when we use FOO again with another data type  
    fooo(const char *d){}; 
};

int main()
{Foo mystring = 'x';
 fooo s='c';
    return 0;
}