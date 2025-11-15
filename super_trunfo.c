#include <stdio.h>

int main()
{

    // Definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo1[4];
    char nome1[50];
    int população1 = 0;
    float area1;
    float pib1;
    int npt1 = 0;
    float densidade1;
    float pib_per_capita1;

    char estado2;
    char codigo2[4];
    char nome2[50];
    int população2;
    float area2;
    float pib2;
    int npt2;
    float densidade2;
    float pib_per_capita2;
    

        // Apresentação do programa e entrada de dados
    printf("Bem vindo ao Super Trunfo dos Estados Brasileiros!\n\n");
    printf("Ajude-nos a cadastrar as cartas do jogo\n");
    printf("Vamos começar pela primeira carta:\n\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado1);
    printf("Digite a população da cidade: ");
    scanf("%d", &população1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt1);
    printf("Digite o codigo da carta: (A letra do estado junto com um número de 01 a 04)");
    scanf("%s", codigo1);

    printf("\nAgora vamos cadastrar a segunda carta:\n\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado2);
    printf("Digite a população da cidade: ");
    scanf("%d", &população2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt2);
    printf("Digite o codigo da carta: (A letra do estado junto com um número de 01 a 04)");
    scanf("%s", codigo2);

        // Cálculo dos atributos derivados para a primeira cidade
    densidade1 = população1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) /  população1; // Convertendo PIB de bilhões para reais

        // Cálculo dos atributos derivados para a segunda cidade
    densidade2 = população2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / população2;


        // Exibição dos dados das cidades cadastradas
    printf("\nCartas cadastradas com sucesso!\n");
    printf("Carta 1:\n Estado: %c\n Codigo: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade populacional: %.2f habitantes/km²\n PIB per capita: %.2f reais\n",
           estado1, codigo1, nome1, população1, area1, pib1, npt1, densidade1, pib_per_capita1);
    printf("Carta 2:\n Estado: %c\n Codigo: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade populacional: %.2f habitantes/km²\n PIB per capita: %.2f reais\n",
           estado2, codigo2, nome2, população2, area2, pib2, npt2, densidade2, pib_per_capita2);
    return 0;
}