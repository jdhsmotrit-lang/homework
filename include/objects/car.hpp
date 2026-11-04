#pragma once
#include <string>

#include "vehicle.hpp"


class Car : public Vehicle {
    double mEngineVolume;
public:
    Car(const std::string &brand, const std::string &model, int year, double price, unsigned int speed, double engineVolume);
    int getWheelsCount() const;
    double getEngineVolumne() const;

protected:
    void printAdditionalData() const override;
};
