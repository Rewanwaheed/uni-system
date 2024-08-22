// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void registration() {
    string username, email;
    int password, pass;
    bool flag = false;
    cout << "please enter your username" << endl;
    cin >> username;
    cout << "please enter your email" << endl;
    cin >> email;
    cout << "please enter your password" << endl;
    cin >> password;
    cout << "please confirm your password" << endl;
    cin >> pass;
    if (password == pass) {
        flag = true;
        cout << "welcome" << " " << username << endl;
    }
    if (!flag) {
        cout << "wrong password please refill the registration" << endl;
        registration();
    }
}

void login() {
    string ids[] = { "ahmed", "mohamed", "abdullah", "shady", "zakria", "rewan", "manar", "youmna", "malak" };
    int passcodes[] = { 1234, 1233, 1244, 1111, 1478, 1598, 1147, 1258, 1473 };
    string usernameL;
    int passwordL;
    bool flag = false;
    cout << "please enter your username" << endl;
    cin >> usernameL;
    cout << "please enter your password" << endl;
    cin >> passwordL;
    for (int i = 0; i < 9; i++) {
        if (usernameL == ids[i] && passwordL == passcodes[i]) {
            flag = true;
            cout << "Welcome " << usernameL;
            break;
        }
    }
    if (!flag) {
        cout << "wrong password or wrong user name please login again" << endl;
        login();
    }
}

void calculateGpa() {
    double g1, g2, g3, g4, g5;
    const double creditHours = 15;
    cout << "please enter your 5 grades" << endl;
    cin >> g1 >> g2 >> g3 >> g4 >> g5;
    double Gpa = ((g1 + g2 + g3 + g4 + g5) / creditHours) / 10;
    cout << "your Gpa = " << Gpa << endl;
}

void searchf() {
    string ids[] = { "ahmed", "mohamed", "abdullah", "shady", "zakria", "rewan", "manar", "youmna", "malak" };
    string studentName;
    bool found = false;
    cout << "search :" << " ";
    cin >> studentName;
    for (int i = 0; i < 9; i++) {
        if (ids[i] == studentName) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Name found" << endl;
    }
    else {
        cout << "Name not found" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Registration" << endl;
        cout << "2. Login" << endl;
        cout << "3. Calculate GPA" << endl;
        cout << "4. Search for a name" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 3:
            calculateGpa();
            break;
        case 4:
            searchf();
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
