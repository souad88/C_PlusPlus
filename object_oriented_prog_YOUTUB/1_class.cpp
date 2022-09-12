//write aclasss to return width and length and AREA


#include <iostream>
using namespace std;

class rectangle{
private:
float length;
float width;
float area;
public:
void set_len(float length)
{
    if (length>=0)
    {
        this->length=length;
    }
    else
    {
        cout<<"error"<<endl;
    }

}
float get_len()
{
    return length;
}
void set_wid(float wid)
{
    if (wid>=0)
    {
        this->width=wid;
    }
    else
    {
        cout<<"error"<<endl;
    }

}
float get_wid()
{
    return width;
}
float get_area()
{
    return length*width;
}
};
int main()
{ rectangle rec;
 rec.set_len(2.5);
 rec.set_wid(3.5);
 cout<<rec.get_len()<<endl;
 cout<<rec.get_wid()<<endl;

cout<<rec.get_area()<<endl;
    return 0;
}