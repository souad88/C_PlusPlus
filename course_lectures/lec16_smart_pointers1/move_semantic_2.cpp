// If i want to creat my own class string ,without using standard library SRING
// we do it in aclass that have a constructor that allocat the string in memory , and
//deconstructor : to free memory from string
//a pointer : point to the string 
//variable :contain size of the word 
//entity class
//NOTIIIIIIIIIICE:: STRING value like "hellow" is considerd as a Right-Value ,, so we have to creat a class 
//that print a right value ,and class takes a character
#include<iostream>
#include<string.h>
using namespace std;
class _string
{ private:
 char *word;
 
 int siz;
 public:
 _string(){}//default_constructor
 _string(const char *wrd)//parametrized_constructor
 { cout<<"String Created"<<endl;
  siz=strlen(word); //strlen is return the size of the string 
  word=new char[siz];
  memcpy(word,wrd,siz);
 } 

 _string(const _string &other) //copy constructor//take aleft value and assign a word on it
  { cout<<"string copied"<<endl;
    siz=other.siz;
    word=new char[siz];
    memcpy(word,other.word,siz);

  }
 _string(_string&& other) // take a right value
 {  cout<<"Move string"<<endl;
   siz=other.siz;
   word=other.word;
   other.siz=0; //intialize siz
   other.word=nullptr; //intialize word
   
 } 
 ~_string(){delete(word);}//Deconstructor


 void print()
 { for (int i=0 ;i<=siz;i++)
    {
      cout<<word[i];//print each character
    }

 }

 
};
class entity
{ private:
 _string w; //object from class _string to use its methods
public:
entity(_string &wrd):w(wrd){

}
entity(_string &&wrd):w(move(wrd)){

}
void printn()
{
    w.print();
}
};

int main(){
//char *w="hellow";
_string s =_string("hellow");
entity en(s);
en.printn();
entity entity(_string("hellow"));
    return 0;
}