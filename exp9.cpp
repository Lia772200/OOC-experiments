#include <iostream>

// Use the entire std namespace to avoid repeatedly typing std::
using namespace std;

// The Complex class definition
class Complex {
private:
    int real; // Private member for the real part
    int imag; // Private member for the imaginary part

public:
    // Constructor to initialize the complex number
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Declare the global functions as friends to access private members
    // Now using ostream and istream directly without the std:: prefix
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};

// Overloading the Stream Insertion Operator (<<) as a global function
// Allows us to write: cout << object;
ostream& operator<<(ostream& out, const Complex& c) {
    // Output the complex number in the format: real + i(imag)
    out << c.real;
    if (c.imag >= 0) {
        out << " + i" << c.imag;
    } else {
        out << " - i" << -c.imag;
    }
    return out; // Return the ostream reference for chaining operations
}

// Overloading the Stream Extraction Operator (>>) as a global function
// Allows us to write: cin >> object;
istream& operator>>(istream& in, Complex& c) {
    cout << "Enter Real Part: ";
    in >> c.real; // Read into the private real member

    cout << "Enter Imaginary Part: ";
    in >> c.imag; // Read into the private imag member

    return in; // Return the istream reference for chaining operations
}

int main() {
    Complex c1;

    // Use the overloaded extraction operator (>>) for input
    cout << "Input a Complex number:" << endl;
    cin >> c1;

    // Use the overloaded insertion operator (<<) for output
    cout << "\nThe complex object is: ";
    cout << c1 << endl;
    
    return 0;
}
