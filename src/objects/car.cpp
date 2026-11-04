#include <iostream>

#include <objects/car.hpp>

const unsigned WHEELS_COUNT = 4;

Car::Car(const std::string &brand, const std::string &model, 
    int year, double price, unsigned int speed, double engineVolume) : Vehicle(
        brand,
        model,
        year,
        price,
        speed
    ), mEngineVolume(engineVolume) {}

int Car::getWheelsCount() const {
    return WHEELS_COUNT;
}

double Car::getEngineVolumne() const {
    return this->mEngineVolume;
}

void Car::printAdditionalData() const {
    std::cout << "Wheels count: " << this->getWheelsCount() << std::endl;
    std::cout << "Engine volume (l): " << this -> getEngineVolumne() << std::endl;
}
