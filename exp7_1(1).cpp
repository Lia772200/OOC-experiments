#include <iostream>
using namespace std;

// First base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// Second base class
class FourWheeler {
public:
    FourWheeler() {
        cout << "This is a Four Wheeler\n";
    }
};

// Subclass derived from two base classes
class Car : public Vehicle, public FourWheeler {
public:
    Car() {
        cout << "This Four Wheeler Vehicle is a Car\n";
    }
};

int main() {
    // Creating object of subclass will invoke the constructor of base classes.
    Car obj;
    return 0;
}

