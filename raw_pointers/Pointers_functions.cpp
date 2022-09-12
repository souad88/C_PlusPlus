//How to pass a pointer to  an array??
//We have to types of passing to a function :
//                1- pass by value(passing by a reference): i just pass a value to functions.
//                                                         ex:- int main (){ int a=8;
//                                                                            pass_(a);}
//                                                              void pass_(int &b){} //a is b with diffeent nam
//                    here i pass the sam value and the sam address in the memory with different name                                                         }
//                    (it is the same variable just with different name)       
//               2- pass by address(passing by pointer): i pass here by the address of the varibale 
//                                                      and when i want to change the variable in the method
//                                                       i have to use the dereference operator to access the value that
//                                                       stored in this address                                                         
//                                                       ex:-int main(){
//                                                                        int a=8;
//                                                                        pass_(&a);}
//                                                           void pass_(int *b){
//                                                                 *b=20;} // *b is the dereference operator
//                                                                          
//dIFFERENCE bETWEEN passing by reference AND BY PASSING BY POINTER:


//write a prog to convert inches to centimeter (1 inch=2.54 centimeter)
#include <iostream>
using namespace std;
//1-PASSING BY REFERENCE:
void cent(double & _inch_)
 {
    _inch_=2.54*_inch_;
 }

//2-PASSING BY POINTER:
void centi(double * _inchat_){
 *_inchat_=2.54* (*_inchat_); //Dereference operator [*variable]: we use it to access the value in the address
                                                              // that i passed it to the argument of function 
  } 
int main(){
   double inch_=20;
   double inchat_=20;
   cout<<"value in inches  "<<inch_<<endl;
   cent(inch_);//1-(Pass by value)==(Pass by reference):-
               //                     (inch_) is the same of (_inch_) with the sam value and the same address
               //                      but different name.
   cout<<"inches value in centimeters  "<<inch_<<endl;
  
   centi(&inchat_); //2-(Pass by Address)==(Pass by pointer):- 
                    //                  is THe same of (double *ptr;  ptr=&inchat_) there i pass the address).

   cout<<"inchat value in centimeters "<<inchat_<<endl;
    return 0;


  }