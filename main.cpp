#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Add Student selected" << endl;
        }
        else if (choice == 2) {
            cout << "View Students selected" << endl;
        }
        else if (choice == 3) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // buffer clear
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;

    while (true) {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();
            students.push_back(s);
            cout << "Student added successfully!\n";
        }
        else if (choice == 2) {
            cout << "\n--- Student List ---\n";
            for (Student s : students)
                s.display();
            if (students.empty())
                cout << "No students added yet.\n";
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
