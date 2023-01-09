//it is a simple project for the beginners ,the simple code is in the source link below , i just Apply the OOP on it
//source : https://www.youtube.com/watch?v=Q5LT0G0X1-E&list=PLsPse_rAwAIpjis9XwQXs-uz7gwfu-pcd&index=1
#include<iostream>
#include<windows.h>
#include "digital_clock.h"
using namespace std;
int main()
{
    

        int hours=0;
        int minut=0;
        int second=0;
        int a=0; //any var for in_finit loop
        int b=0; //any var for an in_finit loop
        clock_digital clock_digit(hours,minut,second,a,b);
        clock_digit.entering_current_clock();
        clock_digit.edite_clock();
       
        
        return 0;
}    
    

//notice : open task manager after running the code and be sure that the programm stopped running in the background
