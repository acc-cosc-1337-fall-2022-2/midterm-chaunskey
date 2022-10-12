#include "question4.h"

bool test_config()
{
    return true;
}

double get_fahrenheit(double c) {
    return c*9/5+32;
}

void menu() {
    double c;
    cout << "\nConvert Celsius to Fahrenheit!\n\n";
    do {
        cout << "\nPlease enter a temperature in Celsius"
                " (enter 9001 to exit): ";
        cin >> c;
        if (c == 9001) cout << "Goodbye!";
        else {
            cout << "\n" << c << " Degrees Celsius is  "
            << get_fahrenheit(c) << " degrees Fahrenheit!";
        }
    }
    while (c != 9001);
}