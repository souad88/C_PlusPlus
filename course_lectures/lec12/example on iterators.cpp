#include<iostream>
#include<vector>
#include<iterator>
#include <numeric>
using namespace std;
int main()
{

        vector<int>x ={1,2,3,4};
        int sum_= accumulate(x.begin(),x.end(),0);
        cout<<"sum_ : "<<sum_<<endl;  

        return 0;
} 
