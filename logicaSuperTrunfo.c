#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char estadoCarta1[50], estadoCarta2[50], codigoCarta1[10], codigoCarta2[10], nomeCidadeCarta1[50], nomeCidadeCarta2[50], cartaVencedora[50];
    int  populacaoCarta1, populacaoCarta2, pontTurCarta1, pontTurCarta2;  
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2;

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

    if(areaCarta1 > areaCarta2){
        strcpy(cartaVencedora, estadoCarta1);
    }
    else{
        strcpy(cartaVencedora, estadoCarta1);
    }

    printf("Por ter a maior área, a carta vencedora é: %s\n",cartaVencedora);
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
