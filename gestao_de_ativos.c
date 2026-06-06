/* Inclusão das bibliotecas necessárias */
#include <stdio.h>
#include <stdlib.h>

/* Definição da estrutura para armazenar os dados das mercadorias */
typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

/* Função para calcular o valor total do estoque */
float calcularTotal(Produto *p, int qtd) {
    float total = 0;
    for (int i = 0; i < qtd; i++) {
        total += p[i].quantidade * p[i].preco;
    }
    return total;
}

/* Função principal */
int main() {
    int qtd;

    /* Entrada de dados */
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qtd);

    /*validação da quantidade informada*/
    if (qtd <= 0) {
    printf("Quantidade inválida.\n");
    return 1;
}

    /* Alocação dinâmica de memória para os produtos */
    Produto *estoque = (Produto *) malloc(qtd * sizeof(Produto));
    if (estoque == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    /* Recebimento dos dados de cada produto */
    for (int i = 0; i < qtd; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", estoque[i].nome);
        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
        printf("Preço unitário (R$): ");
        scanf("%f", &estoque[i].preco);
    }

    /* Processamento e saída dos dados */
    float total = calcularTotal(estoque, qtd);
    printf("\nRelatório Simplificado:\n");
    printf("---------------------------------\n");
    for (int i = 0; i < qtd; i++) {
        printf("Item: %s | Quantidade: %d | Preço: R$ %.2f | Subtotal: R$ %.2f\n",
               estoque[i].nome, estoque[i].quantidade, estoque[i].preco,
               estoque[i].quantidade * estoque[i].preco);
    }
    printf("---------------------------------\n");
    printf("Valor total do estoque: R$ %.2f\n", total);

    /* Liberação da memória alocada */
    free(estoque);

    return 0;
}