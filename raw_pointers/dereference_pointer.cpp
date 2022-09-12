
//dereferences , // how to  change varible in the orginle varible through pointers that point to original variable
#include<iostream>
using namespace std;

int main(){
int v=3;//variable with val=3 and address &v
int *pt1; //is avarible that store address of another varible
pt1=&v;
*pt1=4; // here is it is mean that v=4 !
        //this is the same : (v=4;) is the sam is that we say (*pt1=4;)
cout<<"v= "<<v<<endl;

return 0;
}