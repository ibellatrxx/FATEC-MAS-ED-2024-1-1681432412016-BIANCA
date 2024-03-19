#include <stdio.h>

#define TAMANHO_ARRAY 5

void lerNotas(float *notas) {
    printf("Digite as %d notas:\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", notas + i);
    }
}

void ordenarArray(float *notas) {
    for (int i = 0; i < TAMANHO_ARRAY - 1; i++) {
        for (int j = i + 1; j < TAMANHO_ARRAY; j++) {
            if (*(notas + i) > *(notas + j)) {
                float temp = *(notas + i);
                *(notas + i) = *(notas + j);
                *(notas + j) = temp;
            }
        }
    }
}

void multiplicarArray(float *notas, float valor) {
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        *(notas + i) *= valor;
    }
}

void mostrarArray(float *notas) {
    printf("Array de notas:\n");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("%.2f ", *(notas + i));
    }
    printf("\n");
}

int main() {
    float notas[TAMANHO_ARRAY];
    float valorMultiplicacao;

    lerNotas(notas);

    printf("Digite o valor pelo qual você quer multiplicar as notas: ");
    scanf("%f", &valorMultiplicacao);

    multiplicarArray(notas, valorMultiplicacao);

    printf("Notas multiplicadas:\n");
    mostrarArray(notas);

    ordenarArray(notas);

    printf("Notas ordenadas em ordem ascendente:\n");
    mostrarArray(notas);

    return 0;
}
