#include<iostream>
#include<vector>
#include<functional>
#include<cmath>
using namespace std;


int main()
{

        vector<int> numb {1,2,3,4,5,6};
        auto lambda_square=[](int num)->void{cout<<"num : "<<num<<" square of num : "<<pow(num,2)<<endl;};
        auto lambda_cube=[](int num)->void{cout<<"num : "<<num<<" cube of num : "<<pow(num,3)<<endl;};
        void calculate(vector<int>&,function<void(int)>,function<void(int)>);
        calculate(numb,lambda_square,lambda_cube);
        return 0;
}
void calculate(vector<int>&numb,function<void(int)> calc_square,function<void(int)> calcult_cube)
{
    for(const auto &num:numb)
    {
            if(num %2==0)
            {
                calc_square(num);
            }
            else
            {
                calcult_cube(num);    
            }
    }
}
