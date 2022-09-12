//seconed solid principle :Open for enheritenc /closed for modify
//creat aprog that creat aspecification between products according to -size and color , and the product
//wich have the same color and size together  
#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;
//string vcolor[]={"red","green","blue"};
enum class color {red,green,blue};

//string vsize[]={"small","medium","larg"};
enum class siz {small,medium,larg};

struct product{ //struct to defin name and size and color of products
 string name;
 color _color;
 siz _size;
  };
typedef vector<product*> items; //typedef : is to make abbilty to change data type of vector int,string,...
                                // vector<product*>: creat a vector of pointers that point to  product ,so we have
                                // avector of name , a vector of color , vector of size


//Another struct to groups  products into three groups :1-according to size,2-acoording to color,3-accordding to size and color
struct products{
    //1-Group the products name that have the sam color
    static items bycolor(items item , color colr){ //defin a method of type vector items

       items result;
       for(auto &s:item)
       {
         if (s->_color==colr)
          { result.push_back(s);
          }
      }
     return result;
      }


  //2-Group the products that have the same size
  static items bysize(items item , siz siz){
         items  result; 
         for (auto &s:item)
         { if (s->_size==siz)
                {  result.push_back(s);

                }

         }
       return result;
      }


 //3-Group according to size and color
 static items by_siz_color(items item , siz siz,color color){
     items result;
     for(auto &s:item)
       { if (s->_color==color&&s->_size==siz)
             {
                result.push_back(s);
             }

       }
     return result;  
 } 

};
//fix using specification pattern//inherite from the structure