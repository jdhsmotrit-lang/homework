#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal {
public:
    virtual ~Animal() = default;

    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    void makeSound() const override;
};

class Cat : public Animal {
public:
    void makeSound() const override;
};

#endif