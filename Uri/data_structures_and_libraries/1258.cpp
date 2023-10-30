// https://www.beecrowd.com.br/judge/en/problems/view/1258

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    string name;
    string color;
    char size;
}Tshirt;

int comp(Tshirt t1, Tshirt t2) {
    if (t1.color == t2.color) {
        if(t1.size == t2.size) {
            return t1.name < t2.name;
        }
        else {
            return t1.size > t2.size;
        }
    }
    else {
        return t1.color < t2.color;
    }
}

int main() {
    int n, i;
    Tshirt t;
    vector<Tshirt> vec;

    cin >> n;

    while (n) {
        for (i = 0; i < n; i++) {
            cin.ignore();
            getline(cin, t.name);
            cin >> t.color >> t.size;
            vec.push_back(t);
        }
        sort(vec.begin(), vec.end(), comp);

        for (i = 0; i < n; i++) {
            cout << vec[i].color << " " << vec[i].size << " " << vec[i].name << endl;
        }
        vec.clear();

        cin >> n;

        if (n) {
            cout << endl;
        }
    }
    return 0;
}