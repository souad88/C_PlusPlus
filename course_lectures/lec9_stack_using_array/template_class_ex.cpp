#include <iostream>
using namespace std;
template <class T>
class calc
{    private:
        T a;
        T b;
    public:
        calc()
        {
            cout<<"generic programming !"<<endl;
        }
        calc(T a_,T b_):a(a_),b(b_){}

        T add()
        {
            return a+b;
        };
        
};
int main()
{
    calc<int> c(2,3);
    cout<<c.add()<<endl;

    return 0;
}
