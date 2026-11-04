#include <iostream>
#include <vector>
#include <memory>
#include "objects/car.hpp"
#include "objects/vehicle.hpp"
#include "objects/animal.hpp" 

void printVehicleInfo(const Vehicle &v) {
    v.printInfo();
}

int main() {
    Car car("Porsche", "Cayenne", 2019, 4500000, 250, 3);

    printVehicleInfo(car);

    std::cout << "\n---Проверка животных (Animal)---\n";
    
    std::vector<std::unique_ptr<Animal>> zoo;
    zoo.push_back(std::make_unique<Dog>());
    zoo.push_back(std::make_unique<Cat>());

    for (const auto& animal : zoo) {
        animal->makeSound();
    }

    // car.setSpeed(100000);
    // std::cout << "Car Speed: " << car.getSpeed() << std::endl;

    // Vehicle *v = &car;
    // v->setSpeed(100000);
    // std::cout << "Car Speed: " << car.getSpeed() << std::endl;

    return 0;
}