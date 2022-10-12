#include "question1.h"

bool test_config()
{
    return true;
}

int find_gcd(int x, int y) {
        int z;
        while (x != y) {
            if (x < y) {
                z = x;
                x = y;
                y = z;
            }
            if (x > y) {
                x = x - y;
            }
        }
        if (x == 1) return -1;
        else return x;
    }

void menu() {
    int choice, num1, num2, gcd;
    cout << "Greatest Common Denominator!\n";
    do {
        cout << "\n\n Choices: \n"
                "1: Find greatest common denominator.\n2. Exit.\n";
        cin >> choice;
        if (choice == 1) {
            cout << "Please enter first number: ";
            cin >> num1;
            cout << "Please enter second number: ";
            cin >> num2;
            gcd = find_gcd(num1,num2);
            if (gcd == -1) cout << "There's no common denominator! "
                                   "Please try again.";
            else cout << "\nThe greatest common denominator of "
                     << num1 << " and " << num2 << " is "
                     << gcd << ".";
        }
        else cout << "Goodbye!";
    }
    while (choice != 2);
}