#pragma once
// #ifndef VEHICLE_HPP_
// #define VEHICLE_HPP_
#include <string>


class Vehicle {
    std::string     mBrand;
    std::string     mModel;
    int             mYear;
    double          mPrice;
    unsigned int    mSpeed;

public:
    Vehicle(const std::string &brand, const std::string &model, int year, double price, unsigned int speed);
    virtual ~Vehicle() = default;

    std::string getBrand() const;
    std::string getModel() const;
    int         getYear()  	const;
    double      getPrice() 	const;
    unsigned int getSpeed() const;
    void printInfo() const;

protected:
    virtual void printAdditionalData() const = 0;

private:
    void printBaseInfo() const;
};

// #endif
