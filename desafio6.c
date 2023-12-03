#include <stdio.h>

int somaArray(int arr[], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }

    return soma;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    int resultado = somaArray(array, tamanho);

    printf("A soma dos elementos do array é: %d\n", resultado);

    return 0;
}
