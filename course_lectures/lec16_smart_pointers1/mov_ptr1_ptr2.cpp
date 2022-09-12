
// How to move value of (p1_pointer) to (p2_pointer) and make (p1_pointer is aNull value) 

#include<iostream>
#include<memory>
using namespace std;

class rect{
private:
int len;
int wed;
public:
rect(int l,int w):len(l),wed(w){}
int area()
{
    return len*wed;
}
};
int main ()
{
 unique_ptr <rect> p1(new rect(2,3));//unique_ptr_p1
 //unique_ptr<rect> p2(new rect(4,4)); //unique_ptr_p2
 
 //if we want to move p1 to p2 this method will be an error :
 //unique_ptr<rect>p2(p1); Errooooor
 //Solution : MOVE function 
 unique_ptr<rect>p2;
 p2=move(p1);
 cout<<p2->area();// p2 value =p1 value
 cout<<p1->area();//p1 now became a NULL value

    return 0;
}