#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct record
{
string name;
string addres;

};

int main()
{ 
vector<record>vr(2); //Creat vector of more than on structer//size of vector=2
vr[0].name="mary";//assign value in the name in the structure 
vr[0].addres="cairo";//assign value in the address in the structure
vr[1].name="bana";
vr[1].addres="mans";

auto compar_nam=[](const record & a, const record & b)->bool{ ///autolambda function to chack what is the biggest
   return a.name>b.name;
};
 auto compar_add=[](const record &a , const record & b)->bool{

    return a.addres>b.addres;
 };   
 sort(vr.begin(),vr.end(),compar_nam);//function sort we want to apply it on vector
 sort(vr.begin(),vr.end(),compar_add);
 for (auto v:vr)
 { cout<<v.name<<endl;//print vector nam
    /* code */
 }
 for (auto v:vr)
 {cout<<v.addres<<endl;
    /* code */
 }
 
    
    return 0;

}