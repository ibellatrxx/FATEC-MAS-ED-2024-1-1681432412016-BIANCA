#include <stdio.h>

void Calculadora(int array[], int n) {
    int a, b, num;
    for (a = 0; a < n - 1; a++) {
        for (b = 0; b < n - a - 1; b++) {
            if (array[b] > array[b + 1]) {
                num = array[b];
                array[b] = array[b + 1];
                array[b + 1] = num;
            }
        }
    }
}

int main(void) {

  int numeroInteiros[5];
  int size = sizeof(numeroInteiros) / sizeof(numeroInteiros[0]);

  for (int a = 0; a < 5; a++){
    printf("Digite um número: \n" );
    scanf("%d", &numeroInteiros[a]);
  }

  Calculadora(numeroInteiros, size);

  printf("Os números em ordem crescente são: \n");
  for (int a = 0; a < size; a++){
    printf("%d ", numeroInteiros[a]);
  }
  printf("\n");

  return 0;
}
