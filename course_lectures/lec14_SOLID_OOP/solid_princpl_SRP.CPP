#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
//public structure
struct journal{
string m_title;
vector<string>m_entires;

 explicit journal(const string &title) :m_title(title)// constructor from structure takes constant titles of journal paper 
                                                       //and equaliz m_title=title
  {

  };

 void add(const string &entry)
 {m_entires.push_back(entry);

 }
void save(const string &file_name){
    ofstream ofs(file_name);
    for (auto &s:m_entires){
    ofs<<s.c_str()<<endl;
      }
}

};
//
struct print_entries_manager
{   void save(const journal &j,const string &file_name)
     {
        ofstream ofs(file_name);
         for (auto &s:j.m_entires)
         {
            ofs<<s<<endl;

         }
     }


};
auto main(int argc,char **argv)->int{
    journal ALAHRAM("AL -AHRAM");
    ALAHRAM.add("There is was a visit for the prime minstar of Egypt to india");
    print_entries_manager::save(ALAHRAM,"ALAHRAMxml");


    return 1;
}