#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector<int>num;
    num.push_back(1);
    num.push_back(2);
    for(auto i:num) //ranged_based for loop
    {
        cout<<i<<endl;
    }

    return 0;
}
