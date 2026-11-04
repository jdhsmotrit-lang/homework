#pragma once

#include "objects/vehicle.hpp"


class QuadBike : public Vehicle {
    int     mEnginePower;
    bool    mIsUtility;
public:
    QuadBike(const std::string &brand, const std::string &model, int year, double price, unsigned int speed, int enginePower, bool isUtility);

    int getEnginePower() const;
    double getIsUtility() const;

protected:
    void printAdditionalData() const override;
}