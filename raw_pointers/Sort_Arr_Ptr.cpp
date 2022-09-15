
//ref: opject_oriented_programming in C++ by Rober-Lafore
#include<iostream>
#include <array>
using namespace std;
int main()
{ array<int,4> n={3,2,4,1};
  int *temp;
  temp=&n[0];
 void arr_ptr(int*);
 cout<<"un-ordered array"<<endl;
 for(int i=0;i<4;i++)
 {
    cout<<n[i]<<endl;
 }
 arr_ptr(temp);
 cout<<"ordered array"<<endl;
 for(int i=0;i<4;i++)
 {
    cout<<n[i]<<endl;
 }
 return 0;
}
void arr_ptr(int *temp)
{   void order(int*, int*);
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            order(temp+i,temp+j);
        }
    }
}
void order(int *n,int *m) //order two numbers
{    int temp;
     if (*n<*m)
      { temp=*n;
        *n=*m;
        *m=temp;

      } 

}
/*
without pointer

int main()
{ array<int,4> n={1,2,3,4};

 void order(array<int,4>);
 for(int i=0;i<4;i++)
 {
    cout<<"un-ordered array"<<n[i];
 }
 order(n);
 for(int i=0; i<4; i++){
     cout<<"orderd array"<<n[i]<<endl; 
     }
 return 0;
}
void order(array<int,4>m)
{ int temp;
  
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<4; j++)
    {
        if(m[j]>m[j+1])
            {
                 temp=m[j+1];
                 m[j+1]=m[j];
                 m[j]=temp;


            }
    }
  }
}


*/