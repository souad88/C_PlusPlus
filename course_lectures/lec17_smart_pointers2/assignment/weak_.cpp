#include<iostream>
#include<memory>
using namespace std;

class GasolineSource {
public:
    virtual void FuelUp() = 0;
    virtual ~GasolineSource() = default;
};

class GasStation : public GasolineSource {
public:
    virtual void FuelUp() {
        std::cout << "Pumping gas at gas station" << std::endl;
    }
};

class FuelCan : public GasolineSource {
public:
    virtual void FuelUp() {
        std::cout << "Pumping gas from fuel can" << std::endl;
    }
};

class Car {

private:

    shared_ptr<GasolineSource> gase; //when i need to point to allocat in heap we need to allocate with 
     
     //shared_ptr <GasolineSource> gas=make_shared<GasolineSource>(nullptr);
     //gase=gas;//
     
    

public:
    // The dependency for a source of gasoline is passed in
    // through constructor injection
    // as opposed to hard-coded into the class definition.
    Car(shared_ptr<GasolineSource> service)
    : gase(service) {
        // If the dependency was not defined, throw an exception.
        if(gase == nullptr){        //?????????????????????????????
            throw std::invalid_argument("service must not be null");
        }
    }
    void getGasoline() {
        std::cout << "Car needs more gasoline!" << std::endl;
        // Abstract away the dependency implementation with polymorphism.
        gase->FuelUp();
    }
};



//------------------------------------
int main(){
    //weak_ptr<GasolineSource>gasolin1;
    //{
      shared_ptr<GasolineSource> station_service=make_shared<GasStation>(); //heap ->make_shared:creat object of the type of gasstation
      //gasolin1=station_service;
        
      // Car racecar(gasolin1);
   // }
    Car racecar (station_service);
  /*weak_ptr<GasolineSource>gasolin2;
    {
        shared_ptr<GasolineSource> can_service=make_shared<FuelCan>();
        gasolin2=can_service;
    }*/
  racecar.getGasoline();
  return 0;
}