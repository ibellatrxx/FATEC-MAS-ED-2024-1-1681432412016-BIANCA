#include <stdio.h>

#define TAMANHO_ARRAY 5

void imprimirArray(int *array, int tamanho) {
    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

void ordenarArray(int *array, int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (*(array + j) > *(array + j + 1)) {
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}

int main() {
    int notas[TAMANHO_ARRAY];

    printf("Digite as %d notas:\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    imprimirArray(notas, TAMANHO_ARRAY);

    ordenarArray(notas, TAMANHO_ARRAY);
  
    printf("Array ordenado:\n");
    imprimirArray(notas, TAMANHO_ARRAY);

    return 0;
}
