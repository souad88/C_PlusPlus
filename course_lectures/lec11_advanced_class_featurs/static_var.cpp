//Prog to know how to use ----static ---keyword with local variables
//program know the max temperature using Static variables
//STATIC:make variables only initialized for only one time بتخلي قيمة المتغير الستاتيك بقيمة initialized لمرة
 //لمرة واحده فقط
//----------------------------------------
///// Static keyword used in:- 1-Static local variables ->variables initialized for only one time

//                             2-static global variables->these static variables used only in the file that was declared on it
//                             3-static function ->this function used only in the file that was declared on it
//                             if we use static functions in classes-> we can call the static function 
     //                                in the main prog without creat object of class [class name::function name]
//
//
//Available sections of memory (RAM)::
//.bss:un-initialized global and STATIC variables
//.data:initialized global and STATIC variables
//.stack: LOCAL variables[int main()] &&context switching
//.heap: dynamic memory allocation using (user allocated)(int----=new-----)
#include<iostream>
using namespace std;
int maxtemp(int max)
{
    //initialize static data->stored in .data section of RAM memory
    static int maxtem=0; //initialize variable for one time هيخلي القيمة دي بزيرو لاول مرة فقط فمع كل مرة ادخل درجة 
    //حرارة مختلفة فهيقارن باخر قيمة اتخزنت وليست اول قيمة اتخزنت فيها اللي هي الصفر
    maxtem=max>maxtem?max:maxtem;
    return maxtem;

}
int main()
{
    int temp=0;
    while(1)//continous loop
    {
        cout<<"The input temperature"<<endl;
        cin>>temp;
        cout<<"the max temp"<<endl;
        cout<<maxtemp(temp)<<endl;

    }
}