

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>numbers={1,2,3,4,4,4,4}; //definetion of set //DOSNOOT ALLOW DUPLICATE
    
    for(auto &n:numbers){
    cout<<"NUMBER_LIST"<<n<<endl;
    }
}