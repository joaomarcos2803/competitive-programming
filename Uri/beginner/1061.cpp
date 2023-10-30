// https://www.beecrowd.com.br/judge/en/problems/view/1061

#include <iostream>

using namespace std;

int main() {
    string aux;
    int initialDay, initialHour, initialMinute, initialSecond;
    int finalDay, finalHour, finalMinute, finalSecond;
    int totalDays, totalHours, totalMinutes, totalSeconds;

    cin >> aux >> initialDay;
    cin >> initialHour >> aux >> initialMinute >> aux >> initialSecond;
    cin >> aux >> finalDay;
    cin >> finalHour >> aux >> finalMinute >> aux >> finalSecond;

    totalDays = finalDay - initialDay;
    totalHours = finalHour - initialHour;
    totalMinutes = finalMinute - initialMinute;
    totalSeconds = finalSecond - initialSecond;

    if (totalSeconds < 0) {
        totalSeconds += 60;
        totalMinutes -= 1;
    }
    if (totalMinutes < 0) {
        totalMinutes += 60;
        totalHours -= 1;
    }
    if (totalHours < 0) {
        totalHours += 24;
        totalDays -= 1;
    }
    cout << totalDays << " dia(s)\n";
    cout << totalHours << " hora(s)\n";
    cout << totalMinutes << " minuto(s)\n";
    cout << totalSeconds << " segundo(s)\n";
    
    return 0;
}