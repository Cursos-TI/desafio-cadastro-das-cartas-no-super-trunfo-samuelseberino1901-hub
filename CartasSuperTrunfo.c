#include <stdio.h>

int main() {
    //Declaracao de variaveis para a carta 1
    int populacao1;
    float area1;
    float pib1; 
    int pontosturisticos1;

    //Declaracao de variaveis para a carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("Cadastro da carta 1 \n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos turisticos1);

    printf("Cadastro da carta 2 \n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o pib: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos turisticos2);

    printf("\n---Dados cadastrados---\n");
    Printf("---carta1---\n");
    printf("Populacao: %d\n", populacao1);
    Printf("Area: %.2f\n", area1);
    Printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n---Dados cadastrados---\n");
    Printf("---carta2---\n");
    printf("Populacao: %d\n", populacao2);
    Printf("Area: %.2f\n", area2);
    Printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    
    return 0;
}
