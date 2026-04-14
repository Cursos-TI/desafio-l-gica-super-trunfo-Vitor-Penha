#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estadoCarta1[50], estadoCarta2[50], codigoCarta1[10], codigoCarta2[10], nomeCidadeCarta1[50], nomeCidadeCarta2[50], cartaVencedora[50], resultado[100];
    int  populacaoCarta1, populacaoCarta2, pontTurCarta1, pontTurCarta2, opcao1, opcao2;  
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2, densidade1, densidade2, soma1, soma2, valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;

    printf("--- CARTA 1 ---");
    printf("\nEstado: ");
    scanf(" %[^\n]", estadoCarta1);
    getchar();

    printf("\nCodigo: ");
    scanf(" %[^\n]", codigoCarta1);

    printf("\nCidade: ");
    scanf(" %[^\n]", nomeCidadeCarta1);

    printf("\nPopulação: ");
    scanf("%d", &populacaoCarta1);

    printf("\nPontos Turísticos: ");
    scanf("%d", &pontTurCarta1);

    printf("\nÁrea da Cidade: ");
    scanf("%f", &areaCarta1);

    printf("\nPIB: ");
    scanf("%f", &pibCarta1);

    printf("\n\n--- CARTA 2 ---");
    printf("\nEstado: ");
    scanf(" %[^\n]", estadoCarta2);
    getchar();

    printf("\nCodigo: ");
    scanf(" %[^\n]", codigoCarta2);

    printf("\nCidade: ");
    scanf(" %[^\n]", nomeCidadeCarta2);

    printf("\nPopulação: ");
    scanf("%d", &populacaoCarta2);

    printf("\nPontos Turísticos: ");
    scanf("%d", &pontTurCarta2);

    printf("\nÁrea da Cidade: ");
    scanf("%f", &areaCarta2);

    printf("\nPIB: ");
    scanf("%f", &pibCarta2);

    densidade1 = populacaoCarta1 / areaCarta1;
    densidade2 = populacaoCarta2 / areaCarta2;

    printf("Escolha duas das opções para fazer a comparação das cartas: ");
    printf("\n\n1 - População \n2- Área \n3- PIB \n4- Pontos Turísticos \n5- Densidade Demográfica");
    
    printf("\n\nOpção 1: ");
    scanf("%d", &opcao1);

    printf("\nOpção 2: ");
    scanf("%d", &opcao2);

    switch (opcao1)
    {
    case 1:
        valor1Carta1 = populacaoCarta1;
        valor1Carta2 = populacaoCarta2;
        break;
    case 2:
        valor1Carta1 = areaCarta1;
        valor1Carta2 = areaCarta2;
        break;
    case 3:
        valor1Carta1 = pibCarta1;
        valor1Carta2 = pibCarta2;
        break;
    case 4:
        valor1Carta1 = pontTurCarta1;
        valor1Carta2 = pontTurCarta2;
    default:
        printf("Opção 1 inválido.");
        break;
    }
    
    switch (opcao2)
    {
    case 1:
        valor2Carta1 = populacaoCarta1;
        valor2Carta2 = populacaoCarta2;
        break;
    case 2:
        valor2Carta1 = areaCarta1;
        valor2Carta2 = areaCarta2;
        break;
    case 3:
        valor2Carta1 = pibCarta1;
        valor2Carta2 = pibCarta2;
        break;
    case 4:
        valor2Carta1 = pontTurCarta1;
        valor2Carta2 = pontTurCarta2;
    default:
        printf("Opção 2 inválido.");
        break;
    }

    soma1 = valor1Carta1 + valor2Carta1;
    soma2 = valor1Carta2 + valor2Carta2;

    if(soma1 > soma2){
        printf("Carta 1 Venceu");
        printf("\nEstado: %s", estadoCarta1);
        printf("\nCódigo: %s", codigoCarta1);
        printf("\nCidade: %s", nomeCidadeCarta1);
        printf("\nPopulação: %d", populacaoCarta1);
        printf("\nPontos Turísticos: %d", pontTurCarta1);
        printf("\nÁrea: %.2f", areaCarta1);
        printf("\nPIB: %.2f", pibCarta1);
        printf("\nDensidade: %.2f", densidade1);
        printf("\nSoma 1: %.2f", soma1);

    }else if(soma1 < soma2){
        printf("Carta 2 Venceu");
        printf("\nEstado: %s", estadoCarta2);
        printf("\nCódigo: %s", codigoCarta2);
        printf("\nCidade: %s", nomeCidadeCarta2);
        printf("\nPopulação: %d", populacaoCarta2);
        printf("\nPontos Turísticos: %d", pontTurCarta2);
        printf("\nÁrea: %.2f", areaCarta2);
        printf("\nPIB: %.2f", pibCarta2);
        printf("\nDensidade: %.2f", densidade2);
        printf("\nSoma 2: %.2f", soma2);

    }else{
        printf("Empate: resultados iguais!");
    }
    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
