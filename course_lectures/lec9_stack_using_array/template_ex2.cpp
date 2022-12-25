//swaping two nums ..using generic_programming
#include <iostream>
using namespace std;

template<typename T>
  void swaping(T &a,T &b)
  {
    T temp;
    temp=a;
    a=b;
    b=temp;

  }

int main()
{
    
    int num1=2;
    int num2=5;
    swaping(num1,num2);//using swap with integer
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
    float n1=3.4;
    float n2=5.6;
    swaping(n1,n2); //using swap with float
    cout<<"n1 :"<<n1<<endl;
    cout<<"n2 :"<<n2<<endl;
    return 0;
}


