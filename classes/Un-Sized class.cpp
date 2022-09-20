#include<iostream>
#include<array>
using namespace std;
class display
{ private:
  int *siz;
 public:
  void prnt(int a[],int *siz_)
   {this->siz=siz_;  
    cout<<"the first array a[]= "; 
      for(int i=0; i<*siz;i++)
      {
        cout<<a[i];
      }
    
   }
};
int main()
{ int arr[6];//we should intialize the size with any number and change it.
 int siz_;
 cout<<"Enter size of array Elements: ";
 cin>>siz_;
    for(int i=0; i<siz_; i++)
     {   cin>>arr[i];
     }    
    

array<int,4>num; //unsized array with the standard -> std::array
int size_;
cout<<"Enter size of array: ";
cin>>size_;
for(int i=0; i<size_;i++)
{
cin>>num[i];
}

display *pa;
pa->prnt(arr,&siz_);
return 0;
}
