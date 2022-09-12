
//CREAT A QUEUE THAT [FIRST INPUT FIRST OUTPUT] WITHOUT GENERIC PROG

#include<iostream>
using namespace std;
void push(int elem);
int pop();

/////
class queue{

private:
int size;
 int *queu;
int rear;//refer to the top element in the queue
int front;//refer to the index of the first input in the queue//


public:

queue(int capacity):size(capacity) //constructor initialize values
{
 queu=new int [capacity]; //Creat Queue in the heep memory
 rear=-1;
 front=-1;
}

void push(int elem)
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
int pop()
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