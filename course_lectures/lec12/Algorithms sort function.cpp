//creat vector[3] of structur _structure contains [name , address]
//sort the vector by name and by address
#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

struct record
{
     string name;
     string address;
};

int main()
{      
    
        cout<<"hello !"<<endl;
        vector <record> vr(2);
        
     
         vr[0].name= "samy";
         vr[0].address= "mansoura";
         vr[1].name= "fayrouz";
         vr[1].address= "New cairo";
         vr[2].name= "layla";
         vr[2].address= "New Capital";
        
         
        auto compare_name=[](const record &r1,const record &r2)->bool{

                                                                           return r1.name>r2.name;  };
          
            
        auto compare_add =[](const record &r1,const record &r2)->bool{return r1.address>r2.address;};
        sort(vr.begin(),vr.end(),compare_name);
        
        for(auto v:vr)
             {
                cout<<v.name<<endl;
             }


        sort(vr.begin(),vr.end(),compare_add);
        
        for (auto v:vr)
          {
             cout<<v.address<<endl;
               
         }
        
        
        return 0;
}
