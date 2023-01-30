// A Company support students  (graduated-undergraduated) with courses in many fields .
//COURSES : is the OBservable (subject) .
//undergraduate_Students :OBserver_1 that want to know the new courses availble in the company
//Graduated_students :OBserver_2 that want to know the new courses availble for their stage   in the company 
#include<iostream>
#include<vector>
#include<algorithm>
#include<Tuple> //declaration:tuple<return_type_1,return_type_2> function_name(int VAR1, int VAR2) { return  {VAR1,VAR2}};
                //function_call: auto [var1,var2]=function_name();
                //                cout<<var1<<var2;      
using namespace std;
class observer
{
    public:
        virtual void update()=0;
};
class subject //observable
{
    public:
        virtual void set_courses_for_graduated(string,string)=0;
        virtual void set_courses_for_undergraduated(string,string)=0;
        virtual tuple<string,string> get_courses_for_graduated()=0;
        virtual tuple<string,string> get_courses_for_undergraduated()=0;
        virtual void add_observer(observer *)=0;
        virtual void remove_observer(observer *)=0;
        virtual void notify_observer()=0;
};
class courses:public subject //observable is the courses
{
        private:
                 vector<observer *>o;
                 string ICDL_COURSE,TOEFEL_COURSE,english_beginner_course,windows_course;
        public:
            //setters &getters
            
            void set_courses_for_graduated(string ICDL_COURSE,string TOEFEL_COURSE) override
            {
                    this->ICDL_COURSE=ICDL_COURSE;
                    this->TOEFEL_COURSE=TOEFEL_COURSE;
            }
            void set_courses_for_undergraduated(string english_beginner_course,string windows_course) override
            {
                    this->english_beginner_course=english_beginner_course;
                    this->windows_course=windows_course;
            }
            
            
            tuple<string,string> get_courses_for_graduated() override
            {
                    return {ICDL_COURSE,TOEFEL_COURSE};
            }
            
           tuple<string,string> get_courses_for_undergraduated() override
            {
                    return {english_beginner_course,windows_course};
            }
            //adding and remove and notify observers
            void add_observer(observer *o_) override
            {
                    o.push_back(o_);
            }
            void remove_observer(observer *o_) override
            {
                    o.erase(remove(o.begin(),o.end(),o_));
            }
            void notify_observer() override
            {
                    for(auto i:o)
                    {
                        i->update();
                    }
            }

};
class undergraduated_students:public observer //observer 1 that want to know the new courses
{
       
        private:
            subject *s;
           // string e_course,w_course;
            string u_student[4]={"Salima","Rodina","Asser","Seif"};
        public:
             undergraduated_students(subject *s)
             {
                    this->s=s;
             }   
             void update() override
             {
                  auto [e_course,w_course]=s->get_courses_for_undergraduated();
                    //e_course=s->get_courses_for_undergraduated();
                    //w_course=s->get_courses_for_undergraduated();
                    cout<<"this list of undergraduated students "<<endl;
                    for(int i=0;i<3;i++)
                    {
                        cout<<u_student[i]<<endl;
                    }
                    
                    cout<<"the stage of undergraduated students were emailed with the new list of courses :"<<endl;
                    cout<<"1- "<< e_course<<endl;
                    cout<<"2- "<<w_course<<endl;
             }   
        
                     
};
class graduated_students:public observer //observer 2 that want to know the new courses in the center
{
        

        private:
            subject *s;
            
            string i_student[4]={"youstina","Fayrouz","john","Ramy"};
        
        public:
            graduated_students(subject *s)
            {
                    this->s=s;
            }    
            
            void update() override
             {
                    
                    auto[i_course,t_course]=s->get_courses_for_graduated();
                    
                    cout<<"this list of students "<<endl;
                    for(int i=0;i<3;i++)
                    {
                        cout<<i_student[i]<<endl;
                    }

                    cout<<" the stage of graduated students were emailed with the new list of courses:"<<endl;
                    cout<<"1- "<<i_course<<endl;
                    cout<<"2- "<<t_course<<endl;
             
             }   
        
};
int main()
{
    subject *s=new courses();
    s->set_courses_for_graduated("NEW group for ICDL 200 $","NEW TOEFEL course 300 $ FOR each level ");
    graduated_students G(s);
    s->add_observer(&G);
    G.update();
    /// 
    s->set_courses_for_undergraduated("1ST level in english language 250 $","windos_course 400 $"); 
    undergraduated_students U(s);
    s->add_observer(&U);
    U.update();

    return 0;
}
