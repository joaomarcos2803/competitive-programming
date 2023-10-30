// https://www.beecrowd.com.br/judge/en/problems/view/3084

#include <iostream>

using namespace std;

int main() {
    int angleHours, angleMinutes;
    int hour, minute;

    while(cin >> angleHours >> angleMinutes) {
        hour = (angleHours * 12) / 360;
        minute = (angleMinutes * 60) / 360;
        
        if (hour < 10 && minute < 10) {
            cout << "0" << hour << ":" << "0" << minute << endl;
        }
        else if (hour < 10) {
            cout << "0" << hour << ":" << minute << endl;
        }
        else if (minute < 10) {
            cout << hour << ":" << "0" << minute << endl;
        }
        else {
            cout << hour << ":" << minute << endl;
        }
    }
    return 0;
}