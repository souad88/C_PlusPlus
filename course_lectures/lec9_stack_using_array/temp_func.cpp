//Templat_function 
//Creat afunction that compare between two numbers and return max_num with generic programming
#include<iostream>
template<class M>//generic of function maximum number

//int max(int a,int b);

M max(M a,M b) //defin function of type M templat
{
    return a>b?a:b;
}



//int max(int a ,int b)
//{
//    return a>b?a:b;//ternary operator
//}

int main(){
      
   std::cout<<max(5,7)<<std::endl;
    
    return 0;

}

