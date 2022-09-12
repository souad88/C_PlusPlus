
//CREAT A QUEUE THAT [FIRST INPUT FIRST OUTPUT] WITH GENERIC PROG

#include<iostream>
using namespace std;

//void push(int elem);
//int pop();

/////
template<class T>
class queue{

private:
T size;
T *queu;
T rear;//refer to the top element in the queue
T front;//refer to the index of the first input in the queue//


public:

queue(T capacity):size(capacity) //constructor initialize values
{
 queu=new T [capacity];
 rear=-1;
 front=-1;
}

void push(T elem)
{ if (rear!=size-1) //if queue is not empty
   {      
    if (front==-1&&rear==-1)//first case if queue is empty 
    {
   
       front++;//increase front with one
       queu[++rear]=elem;//store element at the queu[1] and increas pointer rear +1 

    }
      else //there are elements in que but not full
      { queu[++rear]=elem;

      }
   }

}
//template<class T>
T pop()
{
  if (front!=-1&&rear!=-1&&front<=rear)//if it is not empty
  {
    
    return queu[front++];

  }
return -1;
}
};


int main()
{ queue qu(3);
    qu.push(2);
    qu.push(3);
    qu.push(4);
 
 int elem=qu.pop();
 cout<<elem<<endl;
    
}