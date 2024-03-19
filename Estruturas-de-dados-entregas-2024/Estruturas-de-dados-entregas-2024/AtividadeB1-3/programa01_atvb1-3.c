#include <stdio.h>

#define TAMANHO_ARRAY 5

int encontrarMaiorElemento(int *array, int tamanho) {
    int *ptr = array; 
    int maior = *ptr; 
    
    for (int i = 1; i < tamanho; i++) {
        if (*(ptr + i) > maior) { 
            maior = *(ptr + i);  
        }
    }
    
    return maior; 
}

int main() {
    int notas[TAMANHO_ARRAY];

    printf("Insira as %d notas:\n", TAMANHO_ARRAY); 
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }
    
    int maior = encontrarMaiorElemento(notas, TAMANHO_ARRAY);
    
    printf("O maior elemento no array é: %d\n", maior);
    
    return 0;
}
