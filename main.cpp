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
