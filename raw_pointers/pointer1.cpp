//Pointers : is avariable that contains an address of another variable , البوينتر هو عبارة عن متغير وله عنوان ايضا
//البوينتر :هو عبارة عن متغير له قيمة وعنوان  في الذاكرة ..لكن القيمة اللي هو بيخزنها هي عبارة عن عنوان لمتغير اخر
// Reference : is an allias of varible هو نفسه المتغير الاصلي بنفس العنوان ونفس القيمة
//ومينفعش اديلة قيمة في التعريف لانه مجرد اشارة فقط لعنوان المتغير وليس مخزن بيخزن عنوان المتغير زي البوينتر 



//why we use pointers :
//1-accessing array elements.
//2-passing arguments to a functions when the function needs to modify the original arguments
//3-passing arrays and strings to function
//4-obtaining memory form th system
//5-creating data structures such as linked lists.
//---------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int var1=2;//allocat a value at variable vr1
    int var2=3;//allocat a value at varibale var2
               //&var1: it is the address of var1
               //&var2 : it is the address of var2

    int *p1;//define pointer 1 //Notice : *p1 is just A-variable
    int *p2;//define pointer 2 //Notice: *p2 is just A-variable 
    p1=&var1;//make pointer1 to point to variable 1//store address of var1 in p1//value of p1 is equal the addrress of var1 ,but address of p1 is not the same of var1_address 
    p2=&var2;//make pointer2 to point to variable 2//store address of var2 in p2
    cout<<"varible 1"<<var1<<endl;
    cout<<"varible 2"<<var2<<endl;
    cout<<"&var1= "<<&var1<<"  p1= "<<p1<<" *p1=  "<<*p1<<"  &p1= "<<&p1<<endl;
    cout<<"&var2="<<&var2<<" p2=  "<<p2<<" *p2=  "<<*p2<<"  &p2= "<<&p2<<endl;

    return 0;
}