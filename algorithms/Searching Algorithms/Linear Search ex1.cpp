//if you want to search a number in a list of numbers you can use searching algorithm such as linear search
//linear search : search from 0->n-1 of numbers >>>if algorithm finds your number; return number_index; else return -1;
//pseudo code: for i=0 to n-1
//             if number_in_the_list= number_you_search 
//                    return number_in_the_list_index
//                      else return -1 
//worst_case: O(n)
//best_case : O(1)
//EX: search number 10 in this list of numbers [30,40,60,10,4,5,12,200,300], Using linear search algorithm.
#include<iostream>

using namespace std;

int linear_search(int[],int,int);
void index_display(int [],int,int);

int main()
{
    int array_[]={30,40,60,10,4,5,12,200,300};
    int size_arr=sizeof(array_)/sizeof(array_[0]);
    index_display(array_,10,size_arr);    
       
    
    return 0;
}

void index_display(int array_[],int number_,int size_arr)
{
        cout<<"index of  number  "<<number_<<"  : "<<linear_search(array_,10,size_arr)<<endl;
}

int linear_search(int array_[],int number_,int size_arr)
{
    
        for(int i=0;i<size_arr;i++)
            {
                if(array_[i]==number_)
                {
                    return i;
                }
                
            }
        return -1;    

}
