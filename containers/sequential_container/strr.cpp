
//Write aprog to read a phrase and change every charcter in it to 'O' 

#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
string s="hellow";
//cout<<s.length()<<endl;
//int i=s.length();
 array<char,6> se={};
for(int i=0;i<6;i++)
{
    se[i]=s[i];
    cout<<se[i]<<endl;
    
}

for(int i=0 ;i<s.length(); i++)
{
   if(se[i]!='o')
  {
     se[i]='o';
 }
cout<<se[i]<<endl;
} 
return 0;
}