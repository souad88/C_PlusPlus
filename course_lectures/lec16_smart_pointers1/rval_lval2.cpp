
#include<iostream>
using namespace std;
void lprint(string d)
{
    cout <<"Left-Value  : "<<d<<endl;
}
void rprint (string s)      //OR we can take the right value as areference to rvalue :void rprint(string &&s)
 {
    cout<<"Right-Value : "<<s<<endl;
 }


int main(){
//EX-5:
string firstname="souad";
string seconedname="gamal";
string fullname=firstname+seconedname;
//NOTICE :"souad"&"gamal"& firstname+seconedname ->>>all of them is a right val
//firstname+seconedname="ss";   
 cout<<"Right value in the main prog"<<firstname+seconedname<<endl;//will print souad gamal
 lprint(fullname); //print left value   
 rprint (firstname+seconedname); //i pass rvalue without reference to rvalue 

 int n1=2;
 int n2=3;
   
    return 0;
}