#include <stdio.h>

long long solve(long long n) {
    long long result = 1;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            result *= i;  // dodajemy ten czynnik pierwszy tylko raz

            while (n % i == 0) {
                n /= i;   // usuwamy wszystkie jego potęgi
            }
        }
    }

    // jeśli coś zostało > 1, to też jest liczba pierwsza
    if (n > 1) {
        result *= n;
    }

    return result;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        printf("%lld\n", solve(n));
    }

    return 0;
}