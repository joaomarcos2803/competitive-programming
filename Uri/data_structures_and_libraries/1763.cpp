// https://www.beecrowd.com.br/judge/en/problems/view/1763

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> tradutor;
    map<string, string>:: iterator it;
    string str;

    tradutor.insert(make_pair("brasil", "Feliz Natal!"));
    tradutor.insert(make_pair("alemanha", "Frohliche Weihnachten!"));
    tradutor.insert(make_pair("austria", "Frohe Weihnacht!"));
    tradutor.insert(make_pair("coreia", "Chuk Sung Tan!"));
    tradutor.insert(make_pair("espanha", "Feliz Navidad!"));
    tradutor.insert(make_pair("grecia", "Kala Christougena!"));
    tradutor.insert(make_pair("estados-unidos", "Merry Christmas!"));
    tradutor.insert(make_pair("inglaterra", "Merry Christmas!"));
    tradutor.insert(make_pair("australia", "Merry Christmas!"));
    tradutor.insert(make_pair("portugal", "Feliz Natal!"));
    tradutor.insert(make_pair("suecia", "God Jul!"));
    tradutor.insert(make_pair("turquia", "Mutlu Noeller"));
    tradutor.insert(make_pair("argentina", "Feliz Navidad!"));
    tradutor.insert(make_pair("chile", "Feliz Navidad!"));
    tradutor.insert(make_pair("mexico", "Feliz Navidad!"));
    tradutor.insert(make_pair("antardida", "Merry Christmas!"));
    tradutor.insert(make_pair("canada", "Merry Christmas!"));
    tradutor.insert(make_pair("irlanda", "Nollaig Shona Dhuit!"));
    tradutor.insert(make_pair("belgica", "Zalig Kerstfeest!"));
    tradutor.insert(make_pair("italia", "Buon Natale!"));
    tradutor.insert(make_pair("libia", "Buon Natale!"));
    tradutor.insert(make_pair("siria", "Milad Mubarak!"));
    tradutor.insert(make_pair("marrocos", "Milad Mubarak!"));
    tradutor.insert(make_pair("japao", "Merii Kurisumasu!"));

    while (getline(cin, str)) {
        it = tradutor.find(str);

        if (it == tradutor.end()) {
            cout << "--- NOT FOUND ---" << endl;
        }
        else {
            cout << it -> second << endl;
        }
    }
    return 0;
}