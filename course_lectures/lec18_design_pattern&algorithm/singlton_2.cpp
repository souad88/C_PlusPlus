#include <iostream>

using namespace std;

class Singleton
{
public:
	static Singleton *getInstance(); 
    void initSingleton();
private:
	Singleton(){
    }

    Singleton(const Singleton&);
	const Singleton& operator=(const Singleton&);
	static Singleton* instance;
};
void Singleton::initSingleton()
{
        instance = nullptr;
}
Singleton* Singleton::getInstance() 
{
	if(!instance) {
		instance = new Singleton();
		cout << "getInstance(): First instance\n";
		return instance;
	}
	else {
		cout << "getInstance(): previous instance\n";
		return instance;
	}
}

int main()
{
	Singleton *s1 = Singleton::getInstance();
	Singleton *s2 = Singleton::getInstance();
	return 0;
}