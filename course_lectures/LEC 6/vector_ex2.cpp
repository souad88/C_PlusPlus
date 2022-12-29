#include<iostream>
#include<vector>
using namespace std;
void add_element_vector(vector<int>&); //push_back
void display_vector(vector<int>&); //pop_back

int main()
{


    vector<int>num;
    add_element_vector(num);
    display_vector(num);
    return 0;
}
void add_element_vector(vector<int>&num)
{
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    cout<<"push_back"<<endl;
    for(int i:num)
    {
        cout<<i<<endl;
    }
}
void display_vector(vector<int>&num)
{
    num.pop_back();
    num.pop_back();
    cout<<"pop_back"<<endl;
    for(int i:num)
    {
        cout<<i<<endl;
    }
}
