// Write aprogramm ( You have  awidth and height of two traingles C1,C2 ,,,you have to add width of c1 + width 
//of c2 , and add heigh of c1+heigh of c2 ___ to optain anew width and new height to obtain anew triangle C3
// creat class triangle that takes width and heigh and creat three objects C1,C2,C3 ------ add c1+c2
// and store it at C3)
#include<iostream>
using namespace std;
class traingl
{
    private:
    float heigh;
    float width;

    public:
    traingl ():heigh(0),width(0)//default_constructor
    {};
    traingl(float h,float w):heigh(h),width(w)
    {};
    
  traingl operator +( traingl c22)
  { traingl c33; //creat new object for new triangle
   c33.heigh=heigh+c22.heigh;
   c33.width=width+c22.width;
    return c33;
  } 
   void display (traingl c3)
   {
      cout<<"the new traingle "<<c3.heigh<<"------"<<c3.width<<endl;
   }


};
int main()
{ traingl c1(2.5,3.5);
  traingl c2(2,3);
  traingl c3;
 
 c3=c1+c2;

 c3.display(c3);
 return 0;
}