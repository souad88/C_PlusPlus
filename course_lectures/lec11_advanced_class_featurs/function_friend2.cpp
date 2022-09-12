

//////////Complex prog ex

#include<iostream>
using namespace std;
class complex{
 private:
 float mReal,mImag;
 public:
 complex(float real=0,float imag=0):mReal(real),mImag(imag)
 {

 }

friend ostream& operator<<(ostream& output,complex const& complex); /////////////////////friendn function
//return operator +()
//complex c3=c1.operator+(c2)
//c3=c1+c2;
complex & operator+(complex const &rhs)
{
    this->mReal=this->mReal+rhs.mReal;
    this->mImag=this->mImag+rhs.mImag;
    return *this;
}
void setReal(float r1)
{
    this->mReal=r1;
}
float getReal()
{
    return this->mReal;
}
};
ostream& operator<<(ostream& output,complex const& complex){
    output<<complex.mReal<<"+i"<<complex.mImag;
    return output;
}

int main()
{//Default constructor object cd
complex cd;
complex c1(5,6);
complex c2(3,4);
complex c3=c1+c2;
cout<<c3<<endl;

return 0;
}