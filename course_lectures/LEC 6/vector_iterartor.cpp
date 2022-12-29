#include<iostream>
#include <vector>
#include<iterator>
using namespace std;
int main()
{
        vector<int>num {3,4,5};
        vector<int>::iterator it;
        for(it=num.begin();it!=num.end();it++)
            {
                cout<<*it<<endl;
            }


        return 0;
}
