#include<iostream>
//#include<functional>

#include<iostream>
#include "stack.h"
int main()
{
    stack s1(2); //object of class
    s1.push(1);
    s1.push(100);
    int element=s1.pop();
    std::cout<<element;    
    return 0;
}
