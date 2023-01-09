#include<windows.h>
using namespace std;
class clock_digital
{
        private:
            int hour;
            int minut;
            int second;
            int a_;
            int b_;
        public:
            clock_digital(int h,int m,int s,int a,int b);
            void entering_current_clock();
            void edite_clock();
        
};    
