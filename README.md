# Sistema de Controle de Estoque em C

Este projeto é um programa em linguagem C que permite cadastrar produtos, calcular o valor total do estoque e gerar um relatório simplificado com os itens registrados.

## Funcionalidades
- Cadastro de produtos com nome, quantidade e preço unitário.
- Cálculo automático do valor total do estoque.
- Relatório detalhado com subtotal de cada item.
- Uso de alocação dinâmica de memória para flexibilidade.

## Tecnologias
- Linguagem: C
- Bibliotecas padrão: stdio.h, stdlib.h

## Como executar
1. Compile o código:
   gcc estoque.c -o estoque

2. Execute o programa:
   ./estoque

## Exemplo de uso
Digite a quantidade de produtos: 2

Produto 1:
Nome: Caneta
Quantidade: 10
Preço unitário (R$): 1.50

Produto 2:
Nome: Caderno
Quantidade: 5
Preço unitário (R$): 12.00

Saída:
Relatório Simplificado:
---------------------------------
Item: Caneta | Quantidade: 10 | Preço: R$ 1.50 | Subtotal: R$ 15.00
Item: Caderno | Quantidade: 5 | Preço: R$ 12.00 | Subtotal: R$ 60.00
---------------------------------
Valor total do estoque: R$ 75.00

## Observações
- O programa valida a quantidade de produtos informada.
- Caso a memória não possa ser alocada, o programa encerra com mensagem de erro.
- O código é simples e pode ser expandido para incluir novas funcionalidades, como salvar em arquivo ou editar produtos.
