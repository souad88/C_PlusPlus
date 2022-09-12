//harrrrrrd_level



//Observer design pattern :
//it is look like a subscribtion >>>that there are a subscribers wich they 
//subscribe an Object , and these subscribers want to know 
//and observe every somthing occur about this object
//So we have (Publisher,Observer) Or (subscribers,object that subscribers observe it)




#include <iostream>
#include<list>
#include<string>
using namespace std;
//base -class-abstract class wich have pure-virtual function 
class Iobserver { //I ->follow isp solid princible
    public:
    virtual ~Iobserver(){};
    virtual void update(const string msg_subject)=0;//pure virtual function
    
};
//class [add subscribers -remove subscriber- notify subscriber]-creat object
//from abstract class
class Isubject{
    
    
    public:
    virtual ~Isubject(){};
    virtual void attach(Iobserver *observer);
    virtual void dattach(Iobserver *observer);
    virtual void notify();
};


class subject:public Isubject{
    
    private:
    list<Iobserver*>list_observer;
    string message_;
    
    
    public:
    virtual ~subject(){
        cout<<"Good-bye i was the subject"<<endl;
    }

 //subscribtion_management //impleent virtual
 //functions  
 void attach(Iobserver *observer)override {
    list_observer.push_back(observer);
 }
 void dattach(Iobserver *observer)override{
    list_observer.remove(observer);
 }
 
 
void notify()override{

///////////////////////////////////////
  list<Iobserver *>::iterator iterator = list_observer.begin();
    HowManyObserver();
    while (iterator != list_observer.end()) {
      (*iterator)->Update(message_);
      ++iterator;
    }
 //////////////////////////////////////////
 
 }

void createmessage(string message)
{
    this->message_=message;
    notify();
}
void how_many_observer()
{
    cout<<"observers="<<list_observer.size()<<endl;
}
void somebusinesslogic(){
    this->message_="change message message";
    notify();
    cout<<"i am about to do somthing new"<<endl;
}

};

class Observer : public IObserver {
 public:
  Observer(Subject &subject) : subject_(subject) {
    this->subject_.Attach(this);
    std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number_ << "\".\n";
    this->number_ = Observer::static_number_;
  }
  virtual ~Observer() {
    std::cout << "Goodbye, I was the Observer \"" << this->number_ << "\".\n";
  }

  void Update(const std::string &message_from_subject) override {
    message_from_subject_ = message_from_subject;
    PrintInfo();
  }
  void RemoveMeFromTheList() {
    subject_.Detach(this);
    std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
  }
  void PrintInfo() {
    std::cout << "Observer \"" << this->number_ << "\": a new message is available --> " << this->message_from_subject_ << "\n";
  }

 private:
  std::string message_from_subject_;
  Subject &subject_;
  static int static_number_;
  int number_;
};

int Observer::static_number_ = 0;

void ClientCode() {
  Subject *subject = new Subject;
  Observer *observer1 = new Observer(*subject);
  Observer *observer2 = new Observer(*subject);
  Observer *observer3 = new Observer(*subject);
  Observer *observer4;
  Observer *observer5;

  subject->CreateMessage("Hello World! :D");
  observer3->RemoveMeFromTheList();

  subject->CreateMessage("The weather is hot today! :p");
  observer4 = new Observer(*subject);

  observer2->RemoveMeFromTheList();
  observer5 = new Observer(*subject);

  subject->CreateMessage("My new car is great! ;)");
  observer5->RemoveMeFromTheList();

  observer4->RemoveMeFromTheList();
  observer1->RemoveMeFromTheList();

  delete observer5;
  delete observer4;
  delete observer3;
  delete observer2;
  delete observer1;
  delete subject;
}

int main() {
  ClientCode();
  return 0;
}
