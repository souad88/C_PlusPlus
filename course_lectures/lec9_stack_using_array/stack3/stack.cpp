#include<iostream>
#include"stack.h"

class stack
{ 
private:
    int size;
    int *buffer;
    int mtop;

 
    
public:

stack(int capacity):size(capacity)
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
