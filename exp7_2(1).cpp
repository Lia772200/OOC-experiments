#include <iostream>
using namespace std;

// Base class 1
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// Base class 2
class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

// First subclass from Vehicle
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car\n";
    }
};

// Second subclass inherits from Vehicle and Fare
class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This Vehicle is a Bus with Fare\n";
    }
};

int main() {
    // Creating object of Bus will invoke both base class constructors
    Bus obj2;
    return 0;
}

