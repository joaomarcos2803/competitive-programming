// https://www.beecrowd.com.br/judge/en/problems/view/1245

#include <iostream>

using namespace std;

int main() {
    int boots, i, n, m;
    int leftBoot[61], rightBoot[61];
    char l;

    while (cin >> n) {
        boots = 0;
        for (i = 30; i <= 60; i++) {
            leftBoot[i] = 0;
            rightBoot[i] = 0;
        }
        
        for (int i = 0; i < n; i++) {
            cin >> m >> l;

            if(l == 'D')
                rightBoot[m]++;
            else
                leftBoot[m]++;
        }

        for (int i = 30; i <= 60; i++) {
            if(leftBoot[i] != 0 && rightBoot[i] != 0) {
                if(leftBoot[i] <= rightBoot[i])
                    boots += leftBoot[i];
                else
                    boots += rightBoot[i];
            }
        }
        cout << boots << endl;
    }
    return 0;
}