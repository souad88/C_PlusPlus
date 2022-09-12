//دالة تاخد iterator من vector
//وبتاخد هتبدأجمع من عند انهي index
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template<class T,class B>
T accumulate(B first,B last,T initiat)
                                     //(fisrt =vector.begin()->as a_pointer&&last=vector.end()->as apointer)
{ printf("%x\n",first);
   //cout<<*first<<endl;
    first+=initiat; // we cannot equalize (first =initiate) becuase first is as apointer so we must creat a pointer arithmatic 
       printf("%x",first);           // so we equalize it as this method->first+=initiat->(+=) arithmatic pointer  
    
 while(first!=last)
 {   
    initiat=initiat+ *first;
    ++first;
 }
 return initiat;

}

int main()
{ 
 vector<int>d(4);
 for(auto &i:d)
 {cout<<"enter element of vec"<<endl;
  cin>>i; 

 }
 int index;
 cout<<"enter the index to start  summation 0->3"<<endl;
 cin>>index;
 cout<<accumulate(d.begin(),d.end(),index)<<endl;

    return 0;
}