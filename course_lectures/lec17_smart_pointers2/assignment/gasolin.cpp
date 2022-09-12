#include <iostream>
#include<memory>


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
    GasolineSource *gasolineService = nullptr;

public:
    // The dependency for a source of gasoline is passed in
    // through constructor injection
    // as opposed to hard-coded into the class definition.
    Car(GasolineSource *service)
    : gasolineService(service) {
        // If the dependency was not defined, throw an exception.
        if(gasolineService == nullptr){
            throw std::invalid_argument("service must not be null");
        }
    }
    void getGasoline() {
        std::cout << "Car needs more gasoline!" << std::endl;
        // Abstract away the dependency implementation with polymorphism.
        gasolineService->FuelUp();
    }
};

int main() {

    GasolineSource *stationService = new GasStation();  //raw pointer object of class gasolin,with name stationservice
    GasolineSource *canService = new FuelCan();

    Car racecar(stationService);
    racecar.getGasoline();

    Car duneBuggy(canService);
    duneBuggy.getGasoline();

    delete stationService;
    delete canService;
    
    return 0;
}