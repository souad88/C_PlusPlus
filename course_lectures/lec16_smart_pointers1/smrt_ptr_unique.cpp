//Creat UNIQUE SMART Pointer using Keyword unique_ptr<type> pointer_name(new type)
#include <iostream>
#include<memory> //use with smart pointers
using namespace std;

class rect{

    private:

    int len;
    int wed;
    public:
    rect(){}//default construct
    rect(int lent,int wedt):len(lent),wed(wedt){}//initialize construct
    int area()
    { 
        return len*wed;
    }

};
int main()
{
 rect r(2,3);//pass length and width with ordinary way
 cout<< r.area()<<endl;
 unique_ptr<int> p0(new int[10]);//unique_pointer of type integer in heap memory

 //pass length and width through SMART POINTERS of the class type
 unique_ptr<rect> p1 (new rect(10,10)); // first method to creat a unique ptr in heap memory
 //unique_ptr<rect> p2=make_unique<rect>(); //seconed method to creat a unique ptr of class rect stor it in heap
 cout<<p1->area()<<endl;
 //cout<<p2->area()<<endl;

return 0;

}