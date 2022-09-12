#include<iostream>
#include<algorithm>
using namespace std;
template<class T,class B>

class accumulate{
 public:   
  T accumulate(B first,B last,T initiat):
     { while(first!=last)
       {
         initiat=initiat+first;
          ++first;
           }
          return initiat;

     }
};
int main()
{ int frst=1 ,lst=8;
float init,ctr;
 accumulate acc(frst,lst,init);
 cout<<acc.accumulate(frst,lst,init)<<endl;

    return 0;
}