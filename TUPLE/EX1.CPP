#include<iostream>
#include<tuple>
using namespace std;

int main()
{   tuple<float,float,string>calculation(float&,float&);
   
    float n_=3.5,m_=7.5;
    auto [sum_,sub_,w_]=calculation(n_,m_);
    cout<<w_<<" : "<<sum_<<"   "<<sub_<<endl;
    return 0;
}
tuple<float,float,string> calculation(float &n1,float &n2)
{
    float sum_=n1+n2;
    float sub_=n1-n2;
    string w_= "[TUPLE C++17] retrun with my string ,result of adding and subtracting ";
    return {sum_,sub_,w_};
}
