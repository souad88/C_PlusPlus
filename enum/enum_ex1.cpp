//def: enum enum_name {val1,val2}
//ex 
#include <iostream>
using namespace std;
int main()
{
    enum month {jan,feb,oct,december};
    cout<<month::jan<<endl; //print 0
    cout<<month::oct<<endl; //print 2
    enum employe_names {sally_id=4,ramy_id=3,fayrouz_id=1,layla_id=2};
    cout<<"sally id ="<<employe_names::sally_id<<endl;

    return 0;
}
