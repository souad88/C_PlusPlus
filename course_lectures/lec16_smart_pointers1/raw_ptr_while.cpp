
//if we add a while loop it will still excute infinit loop and it will cause amemory-leak
#include<iostream>
using namespace std;
int main()
{
char *p = (char*)malloc(sizeof(char)*10);
//int *t=(int *) malloc (sizeof(int)*10);
  while(1){
  p[0]='h';
  p[1]='l';
  p[2]='l';
  }
    return 0;
}  