#include <stdio.h>

int main (){

//dados das cartas.
int populacao;
int area;
int pib;
int pontosturisticos;
//dados das cartas numero 2.
int populacao2;
int area2;
int pib2;
int pontosturisticos2;

//inserir dados das cartas numero 1.
printf("*****Carta numero 1:***** \n");
printf("Entre com a População: \n");
scanf("%d", &populacao);

printf("Entre com a Área: \n");
scanf("%d", &area);

printf("Entre com a PIB: \n");
scanf("%d", &pib);

printf("Entre com os Pontos Turisticos: \n");
scanf("%d", &pontosturisticos);

//mostar os dados das cartas.
printf("Exibir dados da cicade:\n");
printf("População: %d\n", populacao);
printf("Área: %d\n", area);
printf("PIB: %d\n", pib);
printf("Pontos Turisticos: %d\n", pontosturisticos);


//calculos da Densidade populacional e PIB per Capital.
double DensidadePopulacional = (double) populacao / area;
double pibpercapital = (double) pib / populacao;
double superpoder = (double) populacao + area + pib + pontosturisticos + DensidadePopulacional + pibpercapital;
printf("Densidade Populacional: %.2f\n" , DensidadePopulacional);
printf("PIB per Capita: %.2f\n" , pibpercapital);
printf("Super Poder: %.2f\n\n\n" , superpoder);


                                              //carta numero 2.

//inserir dados das cartas numero 2.
printf("*****Carta numero 2:****** \n\n");
printf("Entre com a População: \n");
scanf("%d", &populacao2);

printf("Entre com a Área: \n");
scanf("%d", &area2);

printf("Entre com a PIB: \n");
scanf("%d", &pib2);

printf("Entre com os Pontos Turisticos: \n");
scanf("%d", &pontosturisticos2);

//mostar os dados das cartas numero 2.
printf("Exibir dados da cicade:\n");
printf("População: %d\n", populacao2);
printf("Área: %d\n", area2);
printf("PIB: %d\n", pib2);
printf("Pontos Turisticos: %d\n", pontosturisticos2);

//calculos da Densidade populacional e PIB per Capitalnumero 2.
double DensidadePopulacional2 =(double) populacao2 / area2;
double pibpercapital2 = (double) pib / populacao2;
double superpoder2 = (double) populacao2 + area2 + pib2 + pontosturisticos2 + DensidadePopulacional2 + pibpercapital2;
printf("Densidade Populacional: %.2f\n" , DensidadePopulacional2);
printf("PIB per Capita: %.2f\n" , pibpercapital2);
printf("Super Poder: %.2f\n\n\n" , superpoder2);


if (superpoder2 > superpoder)
{
    printf("*****Carta Vencedora numero 2 com:***** %.2f\n" , superpoder2);
}

if (superpoder > superpoder2)
{
    printf("*Carta Vencedora Numero 1 com: %.2f\n" , superpoder);

}







}