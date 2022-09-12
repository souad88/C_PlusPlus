//
//
//
//

//we will Creat  :1- Merge-Sort-function(recursive function):1- Is a Method call(merge_array) that takes an 
//                                                    array , and check the length of the array ,if it's 
//                                                    length>1  then, Calculate the middle point in the 
//                                                    array then ,Divide the array into two arrays 
//                                                    one at left and one at right.                                                 
//                                                  2- Call this function in its Scoop and pass to it
//                                                     the left-array to Divide the left-array into two 
//                                                     another array.
//                                                  3- Call this function again in its Scoop and pass the
//                                                     right-array to divide it  into two another array.
//                                                  4- Call the Merge-function to merge the the left and 
//                                                      the right-array. 
//                                                        
//              2- Merge-function:  it Sorts the left array and right array then it merge them
//                                 1-it takes (left array,right array,full array).
//                                 2-Three iterators (one for left-arr,one for Right-arr,one for the full-array).
//                                 3-it excute code when (left-iterator<length of left-arr)&(right-iterator<length of right array).
//                                                 يعني بعمل تشيك على المصفوفة اليمين والمصفوفة الشمال هل في عناصر ولا لا                                              
//                                 4- if value in the (left-array[0]<right-array[0]),then the(full-array[0]=L[0])
//                                    else,(full-arr[0]=R[0]). ي
//عني الاندكس اللي فيه رقم اقل من الرقم اللي في المصفوفة يحطه على الشمال في المصفوفة
//                                 5-while (right-iterator<length of right array)
//                                     then : arr[0]=R[0]
//                                  6-while (left-iterator<length of left array)
//                                        then: arr[0]=L[0]
//-----------------------------------------
#include<iostream>
using namespace std;
//merge_sort(split array into two arrays)
void merge_sort(int arr[],int s)
{
  
  int start_a=0; //start index of full array
  int end_a=s;//end index of full array
  auto mid=start_a+((end_a-start_a)/2);//middle index of full array
  cout<<"start index= "<<start_a<<"last index= "<<end_a<<"middle index = "<<mid<<endl; 
  int left_array[]={};
  int right_array[]={};
  //int size_left;
  //int size_right;
  for(int i=0;i<(s/2);i++)//left array
     {
     left_array[i]=arr[i];
     cout<<"left array element= "<<left_array[i]<<endl;
     }
 for(int i=0;i<s-2;i++)//right array
     {
     right_array[i]=arr[(s/2)+i];
     cout<<"right array element= "<<right_array[i]<<endl;
     
    }
    
  merge_sort(left_array,(sizeof(left_array)/sizeof(left_array[0])));//split left array again

  merge_sort(right_array,(sizeof(right_array)/sizeof(right_array[0])));//split right array again    
   

  merge(arr,left_array,right_array);
 }
void merge(int arr[] ,int left_array[],int right_array[])
   {int index_array=0;
    int first_left=0;  
    int last_left=sizeof(left_array)/sizeof(left_array[0]);
    int first_right=0;
    int last_right=sizeof(right_array)/sizeof(right_array[0]);
    while(last_left>first_left&&last_right>first_right)
      { if (left_array[first_left]<=right_array[first_right])
        { 
          arr[first_left]=left_array[first_left];
          first_left++;
        }
        else
         {
           arr[first_left]=right_array[first_right];
           first_right++;
         }
         

      }
      index_array++;
   for(int i=0;i<=sizeof(arr)/sizeof(arr[0]);i++)
       {
           cout<<arr[i]<<endl;
       }
   }

 
int main()
{ 
 
 int size_;
 cout<<"enter array size"<<endl;
 cin>>size_;
 int arr[size_];
  for(int i=0;i<size_;i++)
    {
       cout<<"enter array_elements"<<endl;
       cin>>arr[i]; 
    }
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"calculated size s= "<<s<<endl;
  void merge_sort(int arr[],int s);
  //invoke method
  merge_sort(arr,s);
   
    return 0;
}