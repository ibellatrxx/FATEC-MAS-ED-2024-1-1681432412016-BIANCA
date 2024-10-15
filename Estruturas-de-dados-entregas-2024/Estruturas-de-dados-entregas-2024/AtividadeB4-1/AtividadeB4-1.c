/*---------------------------------------------------------------*/
/*          FATEC-São Caetano do Sul Estrutura de Dados          */
/*                        Prof Veríssimo                         */
/*               CONTINUAÇÃO Atividade B4-1                      */
/*             Objetivo: Bubble Sort - Implementação             */
/*                     Developer: Bianca Soares                  */
/*                        Data:15/10/2024                        */
/*---------------------------------------------------------------*/

#include <stdio.h>

// Função para realizar o Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int troca; // Variável para verificar se houve troca

    // Laço externo
    for (i = 0; i < n-1; i++) {
        troca = 0; // Reinicia a variável de controle de trocas
        // Laço interno
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca os elementos adjacentes
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                troca = 1; // Houve troca
            }
        }
        // Se nenhuma troca foi feita no laço interno, o array já está ordenado
        if (troca == 0)
            break;
    }
}

// Função para exibir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Solicita ao usuário o número de elementos no array
    printf("Digite o número de elementos no array: ");
    scanf("%d", &n);

    int arr[n];

    // Preenche o array com os números fornecidos pelo usuário
    printf("Digite os %d elementos do array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Exibe o array original
    printf("Array original: \n");
    printArray(arr, n);

    // Chama o Bubble Sort para ordenar o array
    bubbleSort(arr, n);

    // Exibe o array ordenado
    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0;
}
