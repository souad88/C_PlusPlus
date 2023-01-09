#include "digital_clock.h"

clock_digital::clock_digital(int h,int m,int s,int a,int b):hour(h),minut(m),second(s),a_(a),b_(b){}
void clock_digital::entering_current_clock()
    {
             while(a_==0)    
            {   
                cout<<"Current Hour :"<<endl;
                cin>>hour;
                cout<<"Current Minutes : "<<endl;
                cin>>minut;
                cout<<"Seconds : "<<endl;
                cin>>second;
            
                if (hour<24&&minut<60&&second<60) //if the user enter hour=25 minut=61,second=61 or an valuse bigger than
                    {      a_++;                   //then still a_=0 and the while loop still work , the user will re enter another
                                                    //values smaller than 
                    }
                else
                    { 
                        system("cls");
                    }
            }   
    }
void clock_digital::edite_clock()
    {

        while (b_==0)
            {
                    system("cls");
                    cout<<hour<<":"<<minut<<":"<<second<<endl;
                    Sleep(1000);
                    second++; 
                    if(second>59)
                    {
                        second=0;
                        minut++;
                    }
                    if(minut>59)
                    {
                        minut=0;
                        hour++;
                    }
                    if(hour>24)
                    {
                        hour=0;
                    }
            }
    }    
