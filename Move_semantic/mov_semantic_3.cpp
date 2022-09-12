
//----------------------------------------------------
//EX-4:
//Creat a prog that include  a class that takes a value from 2_Object_variables , and return to the main with size and value of this 2 variables
//then swap between two objects 
#include<iostream>
using namespace std;

class check{
    //private:
    int *var_data;
    size_t var_length; //size_t :returns size of objects in BYTES
    public:
    check(){} //defualt constructor
    explicit check(size_t length):var_length(length),var_data(new int [length]){}//Initialize variable length and value of variable
                                                     //var_data(//store it in a heap memory)
    check(check &&other)//takes an R-value by reference
    {
        var_data=other.var_data; //move value in the other.var_ to variable var_ ,and remove data in other.var_
        var_length=other.var_length;
        other.var_data=NULL;
        other.var_length=0;
    }

   
 void swap(check &other)//function to swap a value from Object (&other) and  Object (*this) 
 {
    check temp=move(*this); // define an object form class check and store value in object(*this)in object temp
    //equalizing two objects of class must creat overload operator method for " = "
    other=move(*this);//store value in (*this) in (other) object    
    *this=move(temp);//

 }

 check &operator =(check &&other)noexcept{ //operator overloading =
    var_data=other.var_data;
    var_length=other.var_length;
    var_data=NULL;
    var_length=0;
    //cout<<"*this"<<this<<endl; // print address of (var_data) & (var_length)
    return *this; // *this -> contains value of (var_data)&&(var_length)   
    }

size_t getsize(){
    return var_length;
}
int *getval(){
    return var_data;
}
};



int main (){

 check first_object(20),seconed_object(100); //creat two objects and send R-values
 cout<<"first_object size  "<<first_object.getsize()<<endl;
 cout<<"first_object val  "<<first_object.getval()<<endl;
 cout<<"seconed_object size  "<<seconed_object.getsize()<<endl;
 cout<<"seconed_object val  "<<seconed_object.getval()<<endl;
 swap(first_object,seconed_object);//swap between two objects
 cout<<"first_object size  "<<first_object.getsize()<<endl;
 cout<<"first_object val  "<<first_object.getval()<<endl;
 cout<<"seconed_object size  "<<seconed_object.getsize()<<endl;
 cout<<"seconed_object val  "<<seconed_object.getval()<<endl;
    return 0;
}