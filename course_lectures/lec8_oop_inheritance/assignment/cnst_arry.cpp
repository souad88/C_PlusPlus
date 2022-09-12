//Define a const array and pass it to a reader () function and a modifier () function
// which cahnger every character for an 'O'.Analyze what happends.
#include<iostream>
#include<array>
#include<string>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
 class arr{
    private:
    string ph;
    public:
 arr():ph(0)
 {}
 arr(string phrase):ph(phrase)
 {} 
 const array<char,sizeof(ph)> read(const array<char,sizeof(ph)> p)
 { 
    
    cout<<"enter the phrase"<<endl;
    
    for (auto i:p)
    {
     cin>>i;
    }
    
 }
void modify (const array<char,sizeof(ph)> p)
{
    for(char i:p)
    {
        if (i!='o')
        {
            i='o';
            cout<<i<<endl;
        }
    
    }
}
 };
 int main()
 { string phrase="hellow world";
 
 //int i=phrase.length();
  const array<char,phrase.length()> phras={};
 
 arr ar(phrase);

 ar.read(phras);
 ar.modify(phras);
 return 0;
 }