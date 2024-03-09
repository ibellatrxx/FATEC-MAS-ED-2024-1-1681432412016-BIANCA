#include <stdio.h>


void aplicarDesconto(float *preco, float desconto) {
    if (desconto >= 0 && desconto <= 100) {
        *preco = *preco * (1 - (desconto / 100));
    } else {
        printf("Desconto inválido!\n");
    }
}

int main() {
    float preco, desconto;

    printf("Insira o preço do produto: ");
    scanf("%f", &preco);

    printf("Insira o desconto a ser aplicado (em porcentagem): ");
    scanf("%f", &desconto);

    aplicarDesconto(&preco, desconto);

    printf("Preço original: R$ %.2f\n", preco / (1 - (desconto / 100)));
    printf("Desconto aplicado: %.2f%%\n", desconto);
    printf("Total com desconto desconto: R$ %.2f\n", preco);

    return 0;
}
