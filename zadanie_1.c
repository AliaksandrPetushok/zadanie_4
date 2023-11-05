
#include <stdio.h>

int main() {
    int n;
    printf("Podaj liczbę naturalną n: ");
    scanf("%d", &n);

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }

    printf("Suma kwadratów liczb od 1 do %d to: %d\n", n, suma);

    return 0;
}





