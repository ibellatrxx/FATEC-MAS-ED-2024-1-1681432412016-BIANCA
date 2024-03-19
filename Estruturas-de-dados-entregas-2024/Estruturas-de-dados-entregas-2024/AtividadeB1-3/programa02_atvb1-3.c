#include <stdio.h>

void lerNotas(float *notas, int tamanho) {
    printf("Digite as %d notas:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", notas + i);
    }
}

void ordenarArray(float *notas, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (*(notas + i) > *(notas + j)) {
                float temp = *(notas + i);
                *(notas + i) = *(notas + j);
                *(notas + j) = temp;
            }
        }
    }
}

float calcularSoma(float *notas, int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(notas + i);
    }
    return soma;
}

int main() {
    const int tamanhoArray = 5;
    float notas[tamanhoArray];

    lerNotas(notas, tamanhoArray);
    ordenarArray(notas, tamanhoArray);

    printf("\nNotas em ordem ascendente:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%.2f ", *(notas + i));
    }

    float soma = calcularSoma(notas, tamanhoArray);
    printf("\n\nA soma das notas é: %.2f\n", soma);

    return 0;
}
