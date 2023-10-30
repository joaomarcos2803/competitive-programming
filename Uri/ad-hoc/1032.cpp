// https://www.beecrowd.com.br/judge/en/problems/view/1032

#include <iostream>

using namespace std;

int safePosition(int n, int prime[]) {
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++){
        sum = (sum + prime[n-i]) % i;
    }
    return sum + 1;
}

int isPrime(int n) { 
    int i;

    if (n == 2)
        return 1;
    else {
        for(i = 2; i < n; i++) {
            if(n % i == 0) 
                return 0;
        }
        return 1;
    }
}


void primeNumbers(int prime[]) {
    int i;
    int j = 0;

    for(i = 2; i < 32625; i++){
        if(isPrime(i)){
            prime[j] = i;
            j++;
        }
    }
}

int main(){
    int n;
    int prime[3502];

    primeNumbers(prime);
    cin >> n;

    while(n != 0){
        cout << safePosition(n, prime) << endl;
        cin >> n;
    }
    return 0;
}