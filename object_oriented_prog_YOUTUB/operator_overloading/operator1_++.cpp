//TYPES OF OPERATOR :
//    1-UNARY_OPERATORS: takes one OPERAND. EX: (i++) ,(i--) >>>>(++,--) takes ONE_Operand i to excute operation 
//    2-BINARY_OPERATORS:takes two operands .EX:(x+y),(x-y),(x&&y),......>>> Operators take TWO_OPERANDS x,y
//    3-TERNARY_OPERATORS: takes three operands. Ex: (A>B?:A,B) ....>>three operands a and b and returns a if true ,b if false 
//--------------------------------------
//OPERATOR_OVERLOADING:
//C++ know how to use OPerators between two (int,string,float,......,all program data types in C++),
//but C++ donnot know how to use operators between (TWO OBJects) becuase Objects has a data type form Class or structr or..
// thats called (user_defined_data_type) so we have to USE (OVER_LOADING_OPERATOR ) to force C++ use OPERATORS between two
//objects 
//----------------------------------------------------------------------
//Unary_Operand EX:-Write aprog with a class counter that takes one number and creat two objects that pass  numbers to
//the class from main and add number +1  for every time calling function counter in class counter  using Overloading_operator:
#include <iostream>
using namespace std;
class counter
{
  float n1;
 public:
 
 counter ()//Default constructor
  {}
 
 counter (float num)
   {
       n1=num;
     }

 //----------------------------------------       
// we want c++ to understand this operation on the object  num1++= num1  and excute it in the main, 
// so we have to overload operator (++) in the class  counter
//NOOOOOOOOOTICE::--- c++ UNDERSTAND oPERATOR that overloaded AS AMETHOD ,,EX:-if i over load this operator (++)
//C++ in the main program when he see this OPERAND (++) it understand it as amethod and return to tne overloadec function
//to excute it 
//Syntax of Overloading Operator:
//class_name   OPERATOR   Operator_type ()   {
//                                            code that i want the operator type to excute it
//                                            REturn class_name(the thing that i want it to return to the main);}
//its mean that C++ will understand in the main body code that the OPERATOR that i overloaded it as 
// afunction not as adirect operator 
//Nottttiiiiice : Return in the overload method must be from the same type Class that the Objects created from
// ex : return counter(n1);               
counter operator ++(){   //Pre--FIX : the operator  will be first then the operand is seconed ++n1 
 ++n1; //prefix

 return counter(n1);
}
counter operator ++(int){   //POST-FIX: the operator after the operand_ we add between paranthies(int)
 n1++; //Postfix
 return counter(n1);
}    
  float get_count()
  {
   return n1;
  }
};
int main()
{
counter num1(2);
counter num2(3);
counter num3;
num3 =++num1; //PRE-FIX : c++ will call operator function that called (++) and return (1+n1) with type of the class counter
counter num4=num2++; //POST-FIX
cout<<num3.get_count()<<endl; //print num3
cout<<num4.get_count()<<endl; //print num4
return 0;
}