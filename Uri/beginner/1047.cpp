// https://www.beecrowd.com.br/judge/en/problems/view/1047

#include <iostream>

using namespace std;

int main() {
    int initialHour, initialMinute, finalHour, finalMinute;
    int totalHours, totalMinutes;
    
    cin >> initialHour >> initialMinute >> finalHour >> finalMinute;

    totalHours = finalHour - initialHour;
    totalMinutes = finalMinute - initialMinute;

    if (totalMinutes < 0) {
        totalMinutes += 60;
        totalHours -= 1;
    }
    
   if (totalHours < 0)
        totalHours += 24;

    if (finalHour == initialHour && finalMinute == initialMinute) 
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    else
        cout << "O JOGO DUROU " << totalHours << " HORA(S) E " << totalMinutes << " MINUTO(S)\n";

    return 0;
}