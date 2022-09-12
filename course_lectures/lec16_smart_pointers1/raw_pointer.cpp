#include<iostream>
using namespace std;
int main()
{
//malloc: allocat size in memory heap , 
//malloc :return atype of generic so we must make casting to it to a the same type of the pointer
 char *p=(char*)malloc(sizeof(char)*10);//10*char -> means allocate 10 byt in heap memory
                                        // (char*)malloc ->casting to the return type of malloc to char varible type
    p[0]='h';
    p[1]='e';
    p[2]='l';
    p[3]='l';
    p[4]='o';
    p[5]='w';
   cout<<p<<endl;
    return 0;

}