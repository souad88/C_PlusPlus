#include<iostream>
using namespace std;
class iwrd //interface class for class word
{
  public:
    void virtual display(string *)=0;
};
class word1:public iwrd
{private:
  string *word_;
 public:
   void virtual display(string *w) override
   { this->word_=w;
     cout<<"First phrase is : "<<*w<<endl;
   } 
};
class word2:public iwrd
{private:
 string *wrd_;
 public:
 void virtual display(string *ww) override
 {
   this->wrd_=ww;
   cout<<"Seconed phrase is : "<<*ww<<endl;  
 }
};
int main(){
 string w1,w2;
 w1="hellow tody";
 w2="it is a nice day";
 iwrd *iw;
 word1 w1_;
 word2 w2_;
 iw=&w1_;
 iw->display(&w1);
 iw=&w2_;
 iw->display(&w2);
    return 0;
}
