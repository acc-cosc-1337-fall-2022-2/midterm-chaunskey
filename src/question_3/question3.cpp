#include "question3.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold) {
    if (sold >= 0 && sold < 6) return sold;
    else if (sold < 0) {
        return -99;
    }
    else if (sold < 11) return sold*5;
    else if (sold < 16) return sold*10;
    else return sold*15;
}

void menu() {
    int sold, points;
    cout << "Points Earned!\n\n";
    do {
        cout << "\nPlease enter widgets sold earned "
                "(enter -1 to exit): ";
        cin >> sold;
        sold = validate(sold);
        if (sold == -1) cout << "Goodbye!";
        else {
            points = get_earned_points(sold);
            cout << "\n" << sold << " Widgets sold earns you... ";
            if (points == -99) cout << "Huh? Did you steal widgets? 0 Points to Gryffindor!\n";
            else cout << points << " points! Wow!";
        }
    }
    while (sold != -1);
}

int validate(int choice) {
    if (!cin) {
        cout << "Please enter an integer! ";
        return -1;
    }
    else return choice;
}