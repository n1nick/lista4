#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int num1, num2, somaPrimos = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            somaPrimos += i;
        }
    }

    printf("A soma dos números primos no intervalo [%d, %d] é: %d\n", num1, num2, somaPrimos);

    return 0;
}
