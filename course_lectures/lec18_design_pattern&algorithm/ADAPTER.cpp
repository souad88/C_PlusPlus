//
#include <iostream>
using namespace std;
//interface
class Irect{
   
   public:
   //Irect(){}
    
    virtual void draw()=0; //for new function cod draw not the old 
};
//adaptee class
class legacycode{
    private:
    int x1;
    int x2;
    int x3;
    int x4;
    public:
    legacycode(int _x1,int _x2,int _x3,int _x4):x1(_x1),x2(_x2),x3(_x3),x4(_x4){}
    void olddraw(){
        cout<<"draw rectangle"<<endl;
    }
};
//adapter
class Newrect:public Irect,private legacycode{
    private:
    //Irect *r;
    public:
    Newrect(int x1,int x2,int x3,int x4):
        legacycode(x1,x2,x3,x4){}
         // r=new legacycode(); /// ??
       
    void draw (){
         olddraw();
    }
};
int main()
{
    int x1,x2,x3,x4;
    Irect *i=new Newrect(3,4,5,7);
}