# PROJETO DE VERIFICAÇÃO CRIPTOGRÁFICA - BENCHMARK

### Bianca - Bruno M. - Giovanni C. - Ruan

---

## Descrição do Negócio

A empresa Cyrus precisa monitorar e analisar grandes volumes de dados criptográficos para garantir a integridade e segurança das transmissões. A verificação constante de números primos é essencial para assegurar a robustez dos algoritmos de criptografia e detectar falhas ou tentativas de invasão.

Este software visa implementar uma solução que verifique a primalidade de números, garantindo que os dados transmitidos permaneçam seguros e confiáveis.

---

## Recursividade vs Iteração

### Recursividade:
- Uma função que se chama a si mesma para resolver subproblemas.
- Boa para problemas recursivos, mas consome mais memória e pode causar stack overflow.

### Iteração:
- Usa estruturas de repetição para executar um bloco de código várias vezes.
- É mais eficiente em termos de memória e performance, mas pode ser mais difícil de entender para problemas naturalmente recursivos.

---

## Solução - Iteração

### Verificação Inicial:
- Números menores que 2 não são primos. Se `num < 2`, a função retorna 0.

### Loop de Verificação:
- O loop itera de 2 até `sqrt(num)`.
- Se `num` for divisível por qualquer valor `i` nesse intervalo, retorna 0 (não é primo).

### Retorno Final:
- Se nenhum divisor for encontrado, retorna 1 (o número é primo).

---

### O que a solução faz:
- Verifica se os números do fluxo de dados são primos ou não, armazena-os em arrays separados e exibe o resultado com cores.

### Como funciona:
- Itera sobre um array de números, verifica se são primos com a função `is_prime()`, imprime o resultado colorido e os separa em dois arrays: primos e não primos.

---

## Análise Assintótica - Iteração

---

## Solução - Recursividade

### Função `main`:
- Define um array de números.
- Calcula o tamanho do array.
- Chama `process_data_stream` para verificar a primalidade dos números e imprimir os resultados.

---

### Função `process_data_stream`:
- Recebe um array de inteiros (`data_stream`) e seu tamanho (`size`).
- Itera por cada número no array e verifica se é primo usando `is_prime`.
- Imprime se o número é primo ou não.

---

### Função `is_prime`:
- Inicializa a verificação chamando `is_prime_recursive` com o `divisor` começando em 2.

---

### Função Recursiva `is_prime_recursive`:
- Verifica se um número (`num`) é primo usando um divisor (`divisor`).
- Retorna `false` se `num` for menor que 2.
- Se o `divisor` é maior que a raiz quadrada de `num`, retorna `true`.
- Se `num` é divisível por `divisor`, retorna `false`.
- Caso contrário, chama-se recursivamente com `divisor` incrementado.

---

## Análise Assintótica - Recursividade

### Fatores de Complexidade:
- Tamanho do fluxo de dados (`size`): O(px)
- Verificação de primalidade para cada número (`n`): O(√n) (máximo de divisores testados)

### Complexidade Total:
- O(px * √n)

---

## Qual é a Melhor Solução?

- **Melhor em termos de memória e segurança**: A solução iterativa é geralmente preferida, especialmente para entradas grandes ou em ambientes com restrições de memória.
- **Melhor para legibilidade e simplicidade**: A solução recursiva pode ser uma escolha adequada para problemas menores ou quando a legibilidade do código é uma prioridade.
- Se o seu objetivo é maximizar a eficiência e evitar problemas com recursos de memória, a abordagem iterativa é a melhor escolha.

---
