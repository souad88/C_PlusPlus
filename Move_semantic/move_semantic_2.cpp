//move_constructor



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class vect{
  private:
   int *data; // variable(as apointer) pass it from the main 
   int  size;
   //vector<int> d;
  public:
  vect(){}
  explicit vect(int a):data(new int ){}
  vect(vect &&other){
      data=other.data; //save value of data from old object (other.data) to a new object (data)
      size=other.size; //save size of data
      other.data=nullptr; //remove  data from source object
      other.size=0; //remove data from source object
      cout<<data<<endl;
      cout<<other.data<<endl;
      }
   ~vect(){delete (this);}
  

};
int main(){
 

 vect v(2);

 //vect ve(v);
 //vector<vect> *num {};
 //???????
 //solution is to make another class

    return 0;
}