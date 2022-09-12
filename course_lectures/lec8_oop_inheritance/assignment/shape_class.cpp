//Exercises 1
//Write a program that defines a shape class with a constructor that gives value to width and height.
// The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two variables a triangle and a rectangle and 
//then call the area() function in this two varibles.
#include<iostream>
#include<string>
using namespace std;
class shap{
    protected://variables seen only to the main class and inherited classes from it
    float w,h;
    public:
    shap(){}//default constructor
    void inform(float ww,float hh){
        this->h=hh;
        this->w=ww;
    }//inform method that takes width and heigh
    
    

};
class rectangl:public shap{
    private:
    float _area;
    public:
    void area(){
     
     _area=h * w;
     cout<<"the area of rectangle =  "<<_area<<endl;
     }

};
class triangl:public shap{
    private:
    float _area;
    
    public:
    void area(){
      _area=(1/2)*h*w;
    }
};


int main (){
    string shape;
    float width,heigh;
    
    cout<<"enter the shap rect/triangle"<<endl;
    cin>>shape;
    if (shape=="rect")
    {
      cout<<"enter width of rect"<<endl;
      cin>>width;
     cout<<"enter heigh of rect"<<endl;
     cin>>heigh;

     rectangl r;
     r.inform(width,heigh);
     r.area();
    }
    else if(shape=="triangle"){  
     cout<<"enter the base of trianle"<<endl;
     cin>>width;
     cout<<"enter the  heigh of rect"<<endl;
     cin>>heigh;
     triangl t;
     t.inform(width,heigh);
     t.area();

    }
    

    

    return 0;
}