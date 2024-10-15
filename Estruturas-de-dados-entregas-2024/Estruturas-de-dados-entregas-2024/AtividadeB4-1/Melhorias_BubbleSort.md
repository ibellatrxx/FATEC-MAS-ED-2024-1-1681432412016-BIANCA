
# Melhorias Implementadas no Programa de Bubble Sort

## 1. Otimização com Verificação de Trocas
No algoritmo original de Bubble Sort apresentado em aula, o laço `for` sempre percorre o array inteiro, mesmo quando o array já está ordenado antes de completar todas as iterações. Isso pode levar a execuções desnecessárias, aumentando o tempo de execução, especialmente em casos onde o array já está parcialmente ou completamente ordenado.

### Solução:
Foi implementada uma verificação de trocas dentro do laço `for` para evitar essas iterações desnecessárias. A cada iteração, a variável `troca` verifica se ocorreu alguma troca de elementos. Caso não tenha ocorrido, significa que o array já está ordenado e podemos interromper a execução.

### Código Modificado:
```c
int troca; // Variável para verificar se houve troca

for (i = 0; i < n-1; i++) {
    troca = 0; // Reinicia a variável de controle de trocas
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
```

### Benefícios da Melhoria:
- **Melhora de Desempenho**: A otimização reduz o número de iterações desnecessárias quando o array já está ordenado, resultando em um algoritmo mais eficiente.
- **Cenários de Teste**: O algoritmo otimizado é especialmente eficaz em arrays que já estão ordenados ou quase ordenados, onde o número de comparações e trocas é minimizado.

## 2. Modificação no Input do Usuário
No código original, o array foi pré-definido com valores fixos. Para torná-lo mais dinâmico e interativo, o programa agora solicita ao usuário que insira a quantidade de números no array, além dos próprios valores. Isso torna o programa mais flexível e aplicável a diferentes cenários.

### Código Modificado:
```c
int n;
printf("Digite o número de elementos no array: ");
scanf("%d", &n);

int arr[n]; // Criação dinâmica do array

printf("Digite os %d elementos do array: 
", n);
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
```

### Benefícios da Melhoria:
- **Interatividade**: O programa permite ao usuário inserir uma quantidade personalizada de números, tornando-o mais flexível para testes com diferentes tamanhos de arrays.
- **Escalabilidade**: Com essa modificação, o código se adapta a arrays de qualquer tamanho, não sendo mais limitado a um conjunto fixo de elementos.
