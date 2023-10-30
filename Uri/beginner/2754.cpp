// https://www.beecrowd.com.br/judge/en/problems/view/2754

#include <iostream>

using namespace std;

int main() {
    double a = 234.345, b = 45.698;

    printf("%lf - %lf\n",a,b);
    printf("%.0lf - %.0lf\n",a,b);
    printf("%.1lf - %.1lf\n",a,b);
    printf("%.2lf - %.2lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    printf("%e - %e\n",a,b);
    printf("%E - %E\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);

    return 0;
}