//Write a program that add two complex numbers using OVERloaded operators
//c3.real=c1.real+c2.real ,c3.img=c1.img+c2.img .....
//return full c3 
//print object c3 through OStream overloaded operator
#include<iostream>
using namespace std;
class complex{ 
private:
float real;
float imag;
public:
complex ():real(0),imag(0)
{}
complex(float re,float ig):real(re),imag(ig)
{}
friend ostream &operator <<(ostream &out,complex c);
//friend istream &operator >>(istream &ipt,complex c);
complex operator +(complex c2) //METHOD OPerator overloaded
{complex c3;
c3.real=real+c2.real;
c3.imag=imag+c2.imag;
return c3;
}

};
ostream &operator <<(ostream &out,complex c)
{
    out<<"The result of summation "<<c.real<<"+i"<<c.imag<<endl;
 return out;
}
/* istream &operator >>(istream &ipt,complex c){
 cout<<"enter real of complex"<<endl;
 ipt>>c.real;
 cout<<"enter imaginary of complex"<<endl;
 ipt>>c.imag;
 return ipt;
} */
int main()
{
    complex c1(1,2);
    complex c2(3.2,4.5);
    complex c3;
    c3=c1+c2;
    cout<<c3;
 
 //enter complex number with user
 //complex c4;
 //cin>>c4;
 //complex c5;
 //cin>>c5;
 //cout<<c4<<"   "<<c5<<endl;
 //complex c6;
 //c6=c5+c4;
 //cout<<c6;   
}