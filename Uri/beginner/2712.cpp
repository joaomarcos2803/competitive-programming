// https://www.beecrowd.com.br/judge/en/problems/view/2712

#include <iostream>
#include <cctype>

using namespace std;

bool checkNameplate(string nameplate) {
    int i = 0, count = 0;

    if (nameplate.size() != 8)
        return false;

    if (nameplate[3] != '-') 
        return false;
     
    while (nameplate[i] != '-') {
        if (isupper(nameplate[i])) 
            count++;
        i++;
    }

    if (count != 3)
        return false;
    
    i++;
	while (nameplate[i]) {
		if (!isdigit(nameplate[i]))
			return false;
        i++;
    }

	return true;
}

int main() {
    int N, i;
    string nameplate;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> nameplate;

        if (checkNameplate(nameplate)) { 
            if (nameplate[7] == '1' || nameplate[7] == '2')
                cout << "MONDAY\n";
            else if (nameplate[7] == '3' || nameplate[7] == '4')
                cout << "TUESDAY\n";
            else if (nameplate[7] == '5' || nameplate[7] == '6')
                cout << "WEDNESDAY\n";
            else if (nameplate[7] == '7' || nameplate[7] == '8')
                cout << "THURSDAY\n";
            else 
                cout << "FRIDAY\n";
        }
        else
            cout << "FAILURE\n";
    }
    return 0;
}