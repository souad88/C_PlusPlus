//strategy design pattern 
// 1-interface_class : virtual function_F;
//2- Chiled_classes : to implement interface_class[parent] and contain the virtual_function_F with different behaviour in each class 
//3- class  : that take instantiation of Interface class (aggregation/composition relation) , and point to
//             virtual function in chiled_classes 
#include <iostream>
using namespace std;

class I_interface_toys //<<interface>>
{
    public:
    virtual void toy_price()=0;
};
class ball:public I_interface_toys
{
    public:
    virtual void toy_price()
    {
        cout<<"The price of One Ball = 10 $, and there is a disaccount %30 of you take two of them ! "<<endl;
    }

};
class teddy_bear:public I_interface_toys
{
    public:
    virtual void toy_price()
    {
         cout<<"Price of Big Size TEDDY BEAR = 20 $ , and 10 $ for the small one"<<endl;
    }
};
class strategy //aggregation_relationship  with interface class
{
    private:
        I_interface_toys *toy; 
    public:
        void ball_price()
        {
            toy=new ball();
            toy->toy_price();
        }
    void teddy_price()
        {
         toy=new teddy_bear();
         toy->toy_price();
        }
} ;

int main()
{

    strategy s;
    s.ball_price();
    s.teddy_price();

    return 0;
}
