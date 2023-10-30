// https://www.beecrowd.com.br/judge/en/problems/view/2635

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, i, j, count, largestWord;
    string word;
    vector<string> vec;

    while (cin >> n) {
        for(i = 0; i < n; i++) {
            cin >> word;
            vec.push_back(word);
        }
        cin >> q;
        for (i = 0; i < q; i++) {
            cin >> word;
            
            count = 0;
            largestWord = 0;
            for (j = 0; j < n; j++) {
                if(vec[j].find(word) == 0) {
                    count++;

                    if(vec[j].length() > largestWord) {
                        largestWord = vec[j].length();
                    }
                }
            }
            if (count == 0) {
                cout << "-1" << endl;
            }
            else {
                cout << count << " " << largestWord << endl;
            }
        }   
    }
    return 0;
}