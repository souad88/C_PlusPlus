#include<iostream>
using namespace std;
struct part
{ int modelnumber; //id number of widget
  int partnumber;
  float cost;

};


int main ()
{
  /*  part part1;
    part1.cost=30;
    part1.modelnumber=2;
    part1.partnumber=3;
    cout<<"part number"<<part1.partnumber<<endl;
    cout<<"model number"<<part1.modelnumber<<endl;
    cout<<"cost part"<<part1.cost<<endl; */
    part *part2; //pointer of type part2
    cout<<"part2_cost"<<part2->cost<<endl;
    cout<<"part2_model number"<<part2->modelnumber<<endl;
    cout<<"part2_part number"<<part2->partnumber<<endl;
    
    return 0;
}