//creat a smart unique pointer class  without keyword unique pointer
#include<iostream>
#include<memory>
using namespace std;
class unique_pr{
 private:
  int *p;
  public:
 unique_pr(){}
 unique_pr(int *pp=NULL):p(pp){}
 ~unique_pr(){
    delete(p);
 }
///operator overloading to this operator * to  return the pointer

 int& operator *() //return type is an integer_pointer >>>so definition type of this method is (int &)
 {
    return *p;
 } 
};
int main(){
 
    
    unique_pr r(new int ());
  *r=20;
  cout<<*r<<endl; //we can now use * with an object of a class 
 // cout<<r<<endl;
    return 0;
}