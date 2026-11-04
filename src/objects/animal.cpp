#include "objects/animal.hpp"

void Dog::makeSound() const {
    std::cout << "Собака: Гав-гав!\n";
}

void Cat::makeSound() const {
    std::cout << "Кот: Мяу-мяу!\n";
}