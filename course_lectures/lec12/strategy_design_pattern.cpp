#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct strategy  //1-interface : 1-pure_virtual_function
{
    virtual void calculate_speed()=0;
};
struct BMW :strategy //2-class bmw inherits strategy
{
    void calculate_speed()
    {
            cout<<"BMW_STRUCTURE"<<endl;
    }
};
struct MINI_COPER:strategy
{

    void calculate_speed()
    {
         cout<<"MINI_COPER CLASS"<<endl;   
    }
};
struct vehicl //context
{
        
        strategy *s_;
        vehicl(strategy *s):s_(s){}
        void vehicl_speed()
        {
            s_->calculate_speed();
        }
};
int main()
{

    BMW BM_W;
    MINI_COPER COPER;
    vehicl car1(&BM_W);
    vehicl car2(&COPER);
    cout<<"car1 ::" <<endl;
    car1.vehicl_speed();
    cout<<"car2 ::"<<endl;
    car2.vehicl_speed();
    return 0;
}
