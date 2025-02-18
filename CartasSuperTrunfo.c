#include <stdio.h>

int main (){

//dados das cartas 1.
int populacao;
int area;
int pib;
int pontosturisticos;
char nome1 [100];
int codigo;

//dados das cartas numero 2.
int populacao2;
int area2;
int pib2;
int pontosturisticos2;
char nome [100];
int codigo2;

//inserir dados das cartas numero 1.
printf("*****Carta numero 1:***** \n");

printf("Entre com o nome da cidade: \n");
scanf("%s", &nome1);

printf("Entre com a População: \n");
scanf("%d", &populacao);

printf("Entre com a Área: \n");
scanf("%d", &area);

printf("Entre com a PIB: \n");
scanf("%d", &pib);

printf("Entre com a Código: \n");
scanf("%d", &codigo);

printf("Entre com os Pontos Turisticos:\n");
scanf("%d", &pontosturisticos);


//inserir dados das cartas numero 1.
printf("\n\n*****Carta numero 2:***** \n");

printf("Entre com o nome da cidade: \n");
scanf("%s", &nome);

printf("Entre com a População: \n");
scanf("%d", &populacao2);

printf("Entre com a Área: \n");
scanf("%d", &area2);

printf("Entre com a PIB: \n");
scanf("%d", &pib2);

printf("Entre com a Código: \n");
scanf("%d", &codigo2);

printf("Entre com os Pontos Turisticos:\n");
scanf("%d", &pontosturisticos2);


//mostar os dados das cartas 1.
printf("\n\n***Carta 1:***\n");
printf("Nome da Cidade: %s\n", nome1);
printf("População: %d\n", populacao);
printf("Área: %d\n", area);
printf("PIB: %d\n", pib);
printf("Pontos Turisticos: %d\n", pontosturisticos);
printf("Código: %d\n", codigo);

//mostar os dados das cartas 2.
printf("\n\n***Carta 2:***\n");
printf("Nome da Cidade: %s\n", nome);
printf("População: %d\n", populacao2);
printf("Área: %d\n", area2);
printf("PIB: %d\n", pib2);
printf("Pontos Turisticos: %d\n", pontosturisticos2);
printf("Código: %d\n", codigo2);


return 0;
}