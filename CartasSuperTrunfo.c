#include <stdio.h>

int main() {
    printf("Cadastro de cartas do super trunfo!\n");
    char Estado;
    char Codigo[4];
    char Cidade[30];
    int População;
    float Área;
    float PIB;
    int Pontos;

    printf ("Qual o estado? ");
    scanf("%c", &Estado);

    printf("\n Qual o código da carta?");
    scanf("%s", &Codigo);

    printf("\n Qual o nome da cidade?");
    scanf("%s", &Cidade);

    printf("\n Qual a população da cidade?");
    scanf("%f", &População);

    printf("\n Qual a área da cidade em km²?");
    scanf("%d", &Área);

    printf("\n Qual o PIB da cidade?");
    scanf("%d", &PIB);

    printf("\n Quantos pontos turísticos a cidade tem?");
    scanf("%f", &Pontos);

    printf("CARTA 1 \n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %f\n", População);
    printf("Área em km²: %d\n", Área);
    printf("PIB: %d\n", PIB);
    printf("Número de pontos turísticos: %f\n", Pontos);

    printf ("Qual o estado? ");
    scanf("%c", &Estado);

    printf("\n Qual o código da carta?");
    scanf("%s", &Codigo);

    printf("\n Qual o nome da cidade?");
    scanf("%s", &Cidade);

    printf("\n Qual a população da cidade?");
    scanf("%f", &População);

    printf("\n Qual a área da cidade em km²?");
    scanf("%d", &Área);

    printf("\n Qual o PIB da cidade?");
    scanf("%d", &PIB);

    printf("\n Quantos pontos turísticos a cidade tem?");
    scanf("%f", &Pontos);

    printf("CARTA 2 \n");
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %f\n", População);
    printf("Área em km²: %d\n", Área);
    printf("PIB: %d\n", PIB);
    printf("Número de pontos turísticos: %f\n", Pontos);


    return 0; 
}
