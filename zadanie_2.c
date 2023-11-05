#include <stdio.h>

int main() {
    unsigned long long a, b;
    printf("Podaj liczby naturalne a i b (oddzielone spacją): ");
    scanf("%llu %llu", &a, &b);

    unsigned long long wynik = 1;

    for (unsigned long long i = 0; i < b; i++) {
        wynik *= a;
    }

    printf("%llu^%llu = %llu\n", a, b, wynik);

    return 0;
}