//the same prog stack1 but with using class&constructor&generic prog#include<iostream>
//#include<functional>
#include<iostream>
using namespace std;
template <class T>

class stack
{ 
 private:
    T size;
    T *buffer;
    T mtop;
    
    
 public:
 stack(T capacity):size(capacity)
 {
    buffer=new T [capacity]; //creat array of size capacity in the heap memory->keyword"New"
    mtop=-1;

 }
 void push(T element)
 {
    if(!isfull())
    {
        //mtop++; //pointer refer to the last input at the buffer
        //buffer[mtop]=element; //ex if mtop =1 ->buffer[1]=element ->store the first element in the buffer 
        buffer[++mtop]=element;

    }
 }
 T pop() //return the last element in the buffer
 {
    if(!isempty())//if the buffer is full
    {
        return buffer[mtop--]; //the value of the last input in the buffer ->then decrease the pointr -1
        
    }
    return -1;
 }
 T isfull()
 {       //Method check the buffer is full? and return false or true
    if(mtop==(size-1))
    {
      return true;
    }
    return false;

 }
 T isempty()
 {
    if(mtop==-1) //why not ==1????
    {
      return true;
    }
    return false;
 }

};


int main()
{
    stack s1(2);
    s1.push(1);
    s1.push(100);
    int element=s1.pop();
    std::cout<<element;    
    return 0;
}
