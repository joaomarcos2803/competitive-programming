// https://www.beecrowd.com.br/judge/en/problems/view/2686

#include <iostream>

using namespace std;

int main() {
    double M, x; 
	int hours, minutes, seconds;

    while (cin >> M) {
		x = M + 90;
		hours = (x / 15);
		minutes = (x - hours * 15) * 4;
		seconds = (x - hours * 15 - minutes / 4);
		
		if (hours > 23)
			hours -= 24;

        if (M >= 0 && M < 90 || M == 360)
			printf("Bom Dia!!\n%02d:%02d:%02d\n", hours, minutes, seconds);
		else if (M >= 90 && M < 180)
			printf("Boa Tarde!!\n%02d:%02d:%02d\n", hours, minutes, seconds);
		else if (M >= 180 && M < 270)
			printf("Boa Noite!!\n%02d:%02d:%02d\n", hours, minutes, seconds);
		else if (M >= 270 && M < 360)
			printf("De Madrugada!!\n%02d:%02d:%02d\n", hours, minutes, seconds);
    }
    return 0;
}