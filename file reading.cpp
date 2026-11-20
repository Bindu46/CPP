#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;

    // Creating and writing into a file
    ofstream file("student.txt");

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Student Age: ";
    cin >> age;

    file << "Student Name: " << name << endl;
    file << "Student Age: " << age << endl;

    file.close();

    cout << "\nData successfully written into file!" << endl;

    // Reading data from file
    ifstream readFile("student.txt");

    string line;

    cout << "\n--- Student Details ---" << endl;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}