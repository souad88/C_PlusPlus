//single principle responspility :every method have only one role to do
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

struct journal{ //public by default
  string m_title;
  vector<string>m_entries;
  explicit journal (string title):m_title(title){}//intialized constructor
  void add(const string &entry){        //function to add a new entry to entries vector
     m_entries.push_back(entry);
     }
  void save (const journal &j,const string &filenm)
     { ofstream ofs(filenm); //ofstream :create afile in c:\ with name : filenm 
       for(auto &s:j.m_entries)
       {
         ofs<<s; //creat a file for every new entry of journal
       }
     }
};

int main(){


 journal alahram{"al_ahram"};
 alahram.add("hellow");
 alahram.save(alahram,"alahram.xml");
    return 0;
}
