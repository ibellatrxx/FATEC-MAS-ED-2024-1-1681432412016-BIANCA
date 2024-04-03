/* -----------------------------------------------------------------*
 * FATEC-São Caetano do Sul Estrutura de Dados                      *
 *                                     Avaliação N1 - Parte I       *
 * Objetivo: Controlar Estoque de produtos                          *
 *                                                                  *
 * Autores: <Bianca de Freitas Soares e Ruan Defavari Godoi>        *
 *                                                   Data:02/04/2024*
 *------------------------------------------------------------------*
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Estoque {
    int ID;
    string nome;
    int qnt;
    float preco;
  struct Estoque* prox;
};
 
int main(){
  struct Estoque estoque;
 
strcpy(estoque.ID = 1);
estoque.nome,"Camiseta";
estoque.qnt = 5;
estoque.preco = 29.99;
 
printf("ID: %d\n", estoque.ID);
printf("Nome: %d\n", estoque.nome);
printf("Quantidade: %d\n", estoque.qnt);
printf("Preço: %.2f\n", estoque.preco);
 
  return 0;
 
}