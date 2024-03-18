#include <stdio.h>

#define TAMANHO_ARRAY 5

int encontrarMaiorElemento(int *array) {
    int maior = *array;
    for (int i = 1; i < TAMANHO_ARRAY; i++) {
        if (*(array + i) > maior) {
            maior = *(array + i);
        }
    }
    return maior;
}

int calcularSoma(int *array) {
    int soma = 0;
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        soma += *(array + i);
    }
    return soma;
}

void imprimirArray(int *array) {
    printf("Array: ");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

void multiplicarArray(int *array, int multiplicador) {
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        *(array + i) *= multiplicador;
    }
}

int main() {
    int notas[TAMANHO_ARRAY];

    printf("Digite as %d notas:\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    for (int i = 0; i < TAMANHO_ARRAY - 1; i++) {
        for (int j = 0; j < TAMANHO_ARRAY - i - 1; j++) {
            if (notas[j] > notas[j + 1]) {
                int temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }

    printf("\nMaior elemento: %d\n", encontrarMaiorElemento(notas));
    printf("Soma de todos os elementos: %d\n", calcularSoma(notas));
    imprimirArray(notas);

    int multiplicador;
    printf("\nDigite o valor pelo qual multiplicar todos os elementos do array: ");
    scanf("%d", &multiplicador);
    multiplicarArray(notas, multiplicador);
    printf("Array após multiplicação por %d:\n", multiplicador);
    imprimirArray(notas);

    return 0;
}