//Creat a class that do the rule of Unique_Smart_Pointer and creat an object from it
// of type class rect to claculate rect area  ....without using keyword(Unique_ptr)
#include<iostream>
#include<memory>
using namespace std;
template<class T>
class unique_pr{
    
private:
T *p;
public:
unique_pr(){}
unique_pr (T *pp):p(pp){}
~unique_pr()
{
    delete (p);
}
T& operator*()
{
    return *p;
}


};
class rect{

private:
float l,w;
public:
rect(){}
rect(float len , float wed):l(len),w(wed){}
float area ()
{
    return l*w;
}

};
int main(){
 
 
 unique_pr<rect>p(new rect(2,3)); //Creat an object from class unique ptr of type rect with name PTR_TO_RECT
                                            //and store it in the heap memory
 cout<<P->area()<<endl; ////?????????????????????????
    return 0;
}