// https://www.beecrowd.com.br/judge/en/problems/view/1215

#include <iostream>
#include <set>
#include <cctype>

using namespace std;
 
set<string> dictionary;

int main() {
    int i;
    string str;

    while(cin >> str) { 
        string aux = "";
        for(i = 0; i < str.size(); i++) {
            if(isalpha(str[i])) {
                aux += tolower(str[i]);
            }
            else {
                if (aux.size() > 0) {
                    dictionary.insert(aux);
                    aux = "";
                }
            }
        }
        if(aux.size() > 0) {
            dictionary.insert(aux);
        }     
    }
    for(auto it = dictionary.begin(); it != dictionary.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}