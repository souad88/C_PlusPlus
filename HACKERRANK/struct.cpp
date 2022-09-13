#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct info
{ int age;
 string first_name;
 string last_name;
 int standard;   
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   info student;
   cin>>student.age;
   cin>>student.first_name;
   cin>>student.last_name;
   cin>>student.standard;
   cout<<student.age<<" "<<student.first_name<<" "<<student.last_name<<" "<<student.standard;  
    return 0;
}
