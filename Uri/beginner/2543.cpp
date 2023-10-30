// https://www.beecrowd.com.br/judge/en/problems/view/2543

#include <iostream>

using namespace std;

int main() {
	int N, ID, i, j;
    int countVideos;

    while (cin >> N >> ID) {
        countVideos = 0;
        for (int k = 0; k < N; k++) {
            cin >> i >> j;

            if (i == ID && j == 0)
                countVideos++;
        }
        cout << countVideos << endl;
    }
    return 0;
}