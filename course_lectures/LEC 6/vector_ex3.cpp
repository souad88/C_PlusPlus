//sorting vector_elements
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void display_vector(vector<int>&);

int main()
{

        vector<int >num {1,2,3};
        sort(num.begin(),num.end(),[](const int &a,const int &b)->bool
                {
                    return a>b;
                });
        display_vector(num);
        
        return 0;
}
void display_vector(vector<int>&num)
{
        for(auto i:num)
        {
            cout<<i<<"  ";
        }
}
