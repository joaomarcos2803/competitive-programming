// https://www.beecrowd.com.br/judge/en/problems/view/2582

#include <iostream>

using namespace std;

int main() {
    int C, X, Y;

    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> X >> Y;

        if (X + Y == 0)
            cout << "PROXYCITY\n";
        else if (X + Y == 1)
            cout << "P.Y.N.G.\n";
        else if (X + Y == 2)
            cout << "DNSUEY!\n";
        else if (X + Y == 3)
            cout << "SERVERS\n";
        else if (X + Y == 4)
            cout << "HOST!\n";
        else if (X + Y == 5)
            cout << "CRIPTONIZE\n";
        else if (X + Y == 6)
            cout << "OFFLINE DAY\n";
        else if (X + Y == 7)
            cout << "SALT\n";
        else if (X + Y == 8)
            cout << "ANSWER!\n";
        else if (X + Y == 9)
            cout << "RAR?\n";
        else 
            cout << "WIFI ANTENNAS\n";
    }
    return 0;
}