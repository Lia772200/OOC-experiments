#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// First subclass
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is Car\n";
    }
};

// Second subclass
class Bus : public Vehicle {
public:
    Bus() {
        cout << "This Vehicle is Bus\n";
    }
};

int main() {
    // Creating objects of subclasses will also invoke base class constructor
    Car obj1;
    Bus obj2;
    return 0;
}

