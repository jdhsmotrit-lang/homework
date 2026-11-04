#include <iostream>

#include "objects/vehicle.hpp"


Vehicle::Vehicle(const std::string &brand, const std::string &model, 
    int year, double price, unsigned int speed) 
    : mBrand(brand), mModel(model), mYear(year), mPrice(price), mSpeed(speed) {}

std::string Vehicle::getBrand() const {
    return this->mBrand;
}

std::string Vehicle::getModel() const {
    return this->mModel;
}

int Vehicle::getYear() const {
    return this->mYear;
}

double Vehicle::getPrice() const {
    return this->mPrice;
}

unsigned int Vehicle::getSpeed() const {
    return this->mSpeed;
}

void Vehicle::printInfo() const {
    this->printBaseInfo();
    this->printAdditionalData();
}

void Vehicle::printBaseInfo() const {
    std::cout << "Brand: " << this->getBrand() << std::endl;
    std::cout << "Model: " << this->getModel() << std::endl;
    std::cout << "Year: " << this->getYear() << std::endl;
    std::cout << "Speed: " << this->getSpeed() << std::endl;
}
