// create map 
//insert 3 elements
// print map
//find one of the elements and erase
// print 
// make a second map and assign the first to the second
//print the second map
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    map<string,int>quizes;
    quizes.insert(make_pair("quize_1",10));
    quizes.insert(make_pair("quize_2",5));
    quizes.insert(make_pair("quize_3",12));
    for(auto &[quiz,mint]:quizes)
    {
      cout<<quiz<<" takes "<<mint<<endl;
    }
    quizes.find("quize_1"); // we find with key (the key is th first element of the pair)find element
 
    quizes.erase(quizes.begin(),quizes.find("quize_1"));
    map<string,int>quiz(quizes.begin(),quizes.end());
    cout<<"------------------------------------"<<endl;
    for(auto &[quiz,mint]:quiz)
    {
      cout<<quiz<<" takes "<<mint<<endl;
    }
    quizes.find("quize_1");
///quizes::iterator it
///
return 0;
}