//write aprog with two classes :1-class company that takes (new-jops and jop_name and jop-salary) from main 
//                              2- class employee that takes name and age of employee and salary from main,
//                                 new_jops from company-class.
#include<iostream>
#include<string>
using namespace std;
class company //company_jops_details
{  public:
   bool new_jop;
   string jop_nam;
   float jop_salary;
   
   company(bool n_j,string j_n,float j_s):new_jop(n_j),jop_nam(j_n),jop_salary(j_s){}


};
class employe //employe data
{  public:
   company *com;
   string em_name;
   float age;
   string em_add;
   
   employe(string emp_nm,float ag,string em_ad,company *comm)
      {
        this->em_name=emp_nm;
        this->age=ag;
        this->em_add=em_ad;
        this->com=comm;
      }
   
 void is_new_jop()
 {  string email;
    if (com->new_jop="yes")
      { cout<<"there is anew jop"<<endl;
        cout<<"The new jop in our company is  "<<com->jop_nam<<endl;
        cout<<"The salary of the Jop is  "<<com->jop_salary<<endl;
        cout<<"employee name:-  "<<em_name<<". employee age:- "<<age<<". employee aaddress :- "<<em_add<<endl;
      }
      else
      {
        cout<<"there are no any new jops now. Enter your E-mail to send you the new jops :- "<<endl;
        cin>>email;
      }

 }

};


int main()
 {
   company co("yes","Engineer",2000);
   employe em("sally",30,"cairo",&co);   
  
   em.is_new_jop();
    return 0;
 }
