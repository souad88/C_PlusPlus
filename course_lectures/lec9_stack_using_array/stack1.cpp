// make a buffer that pop and push elements like a stack memory wich concept of last input first output 
//and store it at the heap memory without GENERIC_programming(Templat t)
// SOL:We can creat array with name "buffer" wich store elemnt by element and the last input 
// will be the first output and creat a pointer that refer to the top of the array
#include<iostream>
//#include<functional>

class stack
{ 
 private:
    int size;
    int *buffer;
    int mtop;
    
    
 public:
 stack(int capacity):size(capacity) //initialize constructors size=capacity=capacity 
 {
    buffer=new int [capacity]; //creat array of size capacity in the heap memory->keyword"New"
    mtop=-1;

 }
 void push(int element)
 {
    if(!isfull())
    {
        //mtop++; //pointer refer to the last input at the buffer
        //buffer[mtop]=element; //ex if mtop =1 ->buffer[1]=element ->store the first element in the buffer 
        buffer[++mtop]=element;

    }
 }
 int pop() //return the last element in the buffer
 {
    if(!isempty())//if the buffer is full
    {
        return buffer[mtop--]; //the value of the last input in the buffer ->then decrease the pointr -1
        
    }
    return -1;
 }
 bool isfull()
 {       //Method check the buffer is full? and return false or true
    if(mtop==(size-1))
    {
      return true;
    }
    return false;

 }
 bool isempty()
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
