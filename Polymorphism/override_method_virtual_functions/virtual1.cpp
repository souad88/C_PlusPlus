//قدرة الدالة على انها تظهر بأكثر من شكل 
//with polymorphism : مجموعة كلاسسز واخده وراثه من كلاس اساسية وكلهم بهم نفس الدالة لكن كل دالة لها تصرف مختلف
//ونقدر نستدعي نفس الدالة لكل كلاس حسب مايشاور ال بوينتر على الاوبجكت
// We have asuper calss and inherited classes : we creat avirual function in every class
//and implement it in the main class (header of virtual function)
//we defin a pointer of main class and make it to point to
//the child classes 
//Notice :if we use keyword virual then when we call virtual function
//it will excute the code in the child class that the object
//point to it 
//EX:- we have main class : SHAP (with virtual method print ("hellow mother"))
// and a child class_Rectangle that inherite the main class SHAP with the sam virtual function print("hellow_child")
//then we define pointer : SHAP *shap_ptr; //pointer of type main class SHAP
//                         rectangle rect;
//                         shap_ptr=&rect //pointer of main class point to child class
//                          shap_ptr->print; //it will print("hellow_child")

#include<iostream>
#include<string>
using namespace std;
class shape{
   // private:
    //string color;
   
   public:
   shape(){}
   //shape(string c){}
   virtual int area(){
      cout<<"parent class area: " <<endl;
       return 0; }

    virtual void draw(){
        cout<<"draw parent shap"<<endl;

    }  
  virtual void erase(){
      cout<<"erase the parent"<<endl;
      }
};
class rect:public shape{


  private:
    int length;
    int width;
     string c;
   public:
    rect(int l,int w, string color):length(l),width(w),c(color){}
     int area(){
        cout<<"rectangle area= "<<endl;
        return length*width;
     }
      void draw(){
        cout<<"draw rectangle"<<endl;
      }
      void erase(){
        cout<<"the rectangle"<<endl;
      }
  };
 class circle:public shape
 {  private:
     int wid,hh;
    public:
    circle(int w,int h):wid(w),hh(h){}
    int area(){
        
        cout<<"area of circle"<<endl;
        return (1/2)*wid*hh;
    }
   void draw (){
      cout<<"draw circle"<<endl;
     }
   void erase(){
       cout<<"erase circle"<<endl;
      }
 };

int main(){

 // we can creat apointer from the main class to point to the child class but not vise versa
 shape *shap_ptr;
 rect rec(10,20,"red");
 shap_ptr=&rec;
 shap_ptr->area();
  circle cir(10,12);
 shap_ptr=&cir;
 shap_ptr->area();
    return 0;
}