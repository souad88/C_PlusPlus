//binary search : a={1,2,3,4,5,6}
//we want to search number 4 ? 
//devide number list into two [left side,right side] 
//detecte the Middle element in the number list 
//compare the number you search with the middle ->if it is the same or not
//if the middle not the same ...!
//repeat search in the left side and in the right side
//----------------
//algorithm_analysis
//best case : the element you search ===the middle element in the list
//          : O(1)    
//worst case : the element you search ===the first or the last element in the list
//           : O(log(n))   
//ex:
#include <iostream>
using namespace std;


int main()
{
        int Binary_Search_Algorithm(int[],int,int);
        int num[]={1,2,3,5,6,7,8,9};
        int  numb_of_elements=sizeof(num)/sizeof(*num);
        int search_num=4;
        int index_num;
        index_num=Binary_Search_Algorithm(num,numb_of_elements,search_num);
        cout<<"index of number you search "<<index_num<<endl;
        return 0;
}
int Binary_Search_Algorithm(int num[],int numbs,int srch_num)
{

    int strt=0;
    int end=numbs-1;
    int middle;
    while(strt<=end)
    {
        
        middle=strt+((end-strt)/2);
        if(srch_num==num[middle])
        {
                return middle;
        }
        else if(srch_num>num[middle]) //search in the right side
        {
               strt=middle+1; //start search after the middle element

        }
        else if(srch_num<num[middle]) //search in the left side
        {
                end=middle-1;
        }
    }
    return -1;
}
