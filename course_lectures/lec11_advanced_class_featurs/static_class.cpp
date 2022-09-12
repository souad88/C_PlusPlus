//Creat aprog to calculat volum of a box using(STATIC_FUNCTION &STATIC VARIABLE)


#include<iostream>
using namespace std;
class box
{ private:
double length;
double width;
double heigh;
public:
static int objecount;//define static variable
//constructor befinition
box(double l=2, double w=3, double h=0.5)
{
    cout<<"construcor called."<<endl;
    length=2;
    width=3;
    heigh=0.5;
    objecount++; //increas this variable every time the object box is created
}
double volume()
{
return length*width*heigh;
}
static int getcount()//creat an static function
{
    return objecount;
}

};
 int box::objecount=0; //intialize static-varible in class box 
int main()
{
 double vol,count;
 count=box::getcount(); //we can call static function through glopal resolution scope [::]classname::static function nam  
 cout<<"initial stage count"<<count<<endl;

 box box1(2,3,4);// we creat object to use the other non-static function
 box box2(6,8,9);
 vol=box1.volume();//call function with object
 vol=box2.volume();
 count=box::getcount();
 cout<<count<<endl;

}