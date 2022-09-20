// Types of constructors
//1- default or intialized constructors -> class r{ private:
//                                                   int l;
//                                                  public:
//                                                  r():l(0){}      
//2-Parametrized constructor-> class r{private:
//                                       int l;
//                                       public:
//                                        r(int length):l(length) 
//    
//           
//3- COPY CONSTRUCTOR ->is a constructor that initialize an object using another object of the same class. A copy constructor has the following general function prototype: 
//  class r{
//           r(const r &object)//pass an object from the main 
//             {
//               l=object.l;
//             }
//          };
#include <iostream>
using namespace std;
  
class add {
private:
    int a, b;
  
public:
     add():a(0),b(0){}//intialized constructor
     add(int a1, int b1):a(a1),b(b1){}//parametrized constructor
     add(const add& ad)//copy constructor
     {
        a = ad.a;
        b = ad.b;
     }
  
    int geta() { return a; }
    int getb() { return b; }
    int getadd(){return a+b;}
};
  
int main()
{
    add d1(2, 3); // first constructor
    add d2 = d1; // Copy of constructor into another one
  
    
    cout << "d1.geta = " << d1.geta()<<endl;
    cout << "d1.getb = " << d1.getb()<<endl;
    cout << "d2.geta = " << d2.geta()<<endl;//return the same val
    cout<< "d2.getb= " << d2.getb()<<endl;//return the same val
    cout<<"d1.getadd= "<<d1.getadd()<<endl;
  
    return 0;
}
