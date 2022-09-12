#include <iostream>
#include<string>
#include<array>
#include<algorithm>
#include<iterator>

using namespace std;
int main()
{array<int,8> num={2,3,3,5,6,6,8,2};
 int k=0;
 int j=0;
for (int elem:num)
{
   cout<<elem<<endl;
}




 for (int j =0; j < num.size(); j++)
 {
    for (int i = 0; i < num.size(); i++)
     {   (num[j]==num[i])?k++:k;
      
       }
   
   cout<<"number of "<<num[j]<<" with index ["<<j<<"]"<<" repeated "<<k<<endl;
   k=0; 
   
 } 

//////////////////////////////////////////////////////////////
/*int pos=0;
for( int i = 0; i < num.size(); i++)
{
    if (i!=pos)
    {
       
    }
    
}
*/


    return 0;
}