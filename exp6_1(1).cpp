#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
    char name[25];

public:
    void getdata() {
        cout << "\n------------------------------------------";
        cout << "\nEnter Roll No.: ";
        cin >> roll;
        cout << "Enter Student Name: ";
        cin >> name;
    }

    void putdata() {
        cout << "\n------------------------------------------";
        cout << "\n*********** Student Marklist ***********";
        cout << "\n------------------------------------------";
        cout << "\nRoll No.: " << roll;
        cout << "\nStudent Name: " << name << endl;
    }
};

// Derived class from Student
class StudentExam : public Student {
protected:
    int sub1, sub2, sub3, sub4, sub5, sub6;

public:
    void accept_data() {
        getdata();
        cout << "Enter Marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter Marks for Subject 2: ";
        cin >> sub2;
        cout << "Enter Marks for Subject 3: ";
        cin >> sub3;
        cout << "Enter Marks for Subject 4: ";
        cin >> sub4;
        cout << "Enter Marks for Subject 5: ";
        cin >> sub5;
        cout << "Enter Marks for Subject 6: ";
        cin >> sub6;
    }

    void display_data() {
        putdata();
        cout << "Marks of Subject 1: " << sub1;
        cout << "\nMarks of Subject 2: " << sub2;
        cout << "\nMarks of Subject 3: " << sub3;
        cout << "\nMarks of Subject 4: " << sub4;
        cout << "\nMarks of Subject 5: " << sub5;
        cout << "\nMarks of Subject 6: " << sub6 << endl;
    }

    int totalMarks() {
        return sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
    }
};

// Derived class from StudentExam
class StudentResult : public StudentExam {
public:
    void calculate() {
        float per = totalMarks() / 6.0;
        cout << "Total Percentage: " << per << "%" << endl;
        cout << "------------------------------------------\n";
    }
};

int main() {
    StudentResult str;
    int cnt, i;
    cout << "Enter No. of Students You Want: ";
    cin >> cnt;

    for (i = 0; i < cnt; i++) {
        str.accept_data();
        str.display_data();
        str.calculate();
    }

    return 0;
}

