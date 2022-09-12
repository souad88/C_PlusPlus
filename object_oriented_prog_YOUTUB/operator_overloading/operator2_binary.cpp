//BINary operand EX: we have three objects c1,c2,c3 from class SUM and this objects defined in the main 
//,we want to add c1+c2 and store the result in C3
// C1+C2 :1- we will Creat an overload operator method of type (+).
//        2- Object C1 in main body Will Call Method (+) and go to it.
//        3- AT th method (+) : this method will take THE SECONED OBJECT as an input to it
//                              return_type_class_name  operator + (class_name new object){
//                                                         
//                                                                       return Object of class;   }
//        4- At the method (+) body-:Add two objects:
//            EX-:      res.constructor_variable = constructor_variable + new object .constructor_variable;  

#include <iostream>
using namespace std;
class sum
{ private:
 float n;
 public:
 sum ():n(0) //defualt constructor
 {};
 sum(float m):n(m) //initializer Constructor put n=m
 { 
 };
 
 sum operator+(sum g )
 { sum d;
  d.n= n +g.n; //d.n= n(المتغير في ال constructor بقيمته الحاليه)+ (new variable stored in new object g in n)
  //                                 وهيخزن ناتج الجمع في المتغير n الموجود في الكلاس

 return d;
 }
 void display()
 { 
    cout <<n<<endl; //print result value
    
 }

};
int main ()
{
    sum s1(2); //store first num in N=M in the constructor sum
    sum s2(3); //stor seconed
    sum s3; // creat object from defaut constructor
    s3=s1+s2;// sum two numbers

   s3.display();
}