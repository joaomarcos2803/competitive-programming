// https://www.beecrowd.com.br/judge/en/problems/view/2139

#include <iostream>

using namespace std;

int main() {
    int month, day, daysUntilChristmas;
    int daysEachMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    while (cin >> month >> day) {
        if (month == 12 && day == 25)
            cout << "E natal!\n";
        else if (month == 12 && day == 24)
            cout << "E vespera de natal!\n";
        else if (month == 12 && day > 25)
            cout << "Ja passou!\n";
        else {
            daysUntilChristmas = daysEachMonth[month-1] - day;

            for (int i = month; i < 12; i++) {
                daysUntilChristmas += daysEachMonth[i];
            }
            cout << "Faltam " << daysUntilChristmas << " dias para o natal!\n";
        }
    }

    return 0;
}