
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    // Default Constructor
    Student()
    {
        id = 101;
        name = "Bindu";
    }

    void display()
    {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s1;

    s1.display();

    return 0;
}
