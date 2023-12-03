#include <stdio.h>

int main() {
    int n, i, num, soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite a sequência de %d números inteiros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            soma += num;
        }
    }

    printf("A soma dos números pares na sequência é: %d\n", soma);

    return 0;
}
