#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "---------------------" << endl;
    }
};

void addStudent() {
    Student s;
    ofstream file("students.txt", ios::app);
    s.input();
    file << s.id << " " << s.name << " " << s.age << endl;
    file.close();
    cout << "Student added successfully!\n";
}

void displayStudents() {
    Student s;
    ifstream file("students.txt");
    while (file >> s.id >> s.name >> s.age) {
        s.display();
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}
