
#include<iostream>
using namespace std;

//raw pointers_malloc_func
    
 //rw_ptr(){}
 //rw_ptr(char *pp):ptr(pp)
 //{}
 char* val()
 { char *ptr=(char*)malloc(sizeof(char)*10);
    ptr[0]='h';
    ptr[1]='l';
    return ptr;
 }


int main(){

    char *p=val();
    cout<<p<<endl;
 
 

}
