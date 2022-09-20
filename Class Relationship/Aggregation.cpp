//write aprogram that have two classes (1-person class : wich take name from main  and address from class-address and print them)
//                                      (2-class address : take address from the main and passes it to class person)
//relation between class person and class address is aggregation relationship     
#include<iostream>
using namespace std;
class address
{ public:
  string street;
  string city;
  string country;
 address(string s,string ci,string co):street(s),city(ci),country(co){}

};
class person
{
    public:
    string name_;
    address *ad_;
    person(string name,address *ad)
      {
        this->name_=name;
        this->ad_=ad;
      }
  
   void display()
      {
        cout<<"name: "<<name_<<"address :"<<ad_->street<<ad_->city<<ad_->country;
      }  
  };
int main()
{    
     address address("Ahmed-Orabi-street","cairo","Egypt");
     person p("fayrouz",&address);
     p.display();
    
}
