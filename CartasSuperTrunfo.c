#include <stdio.h>

int main() {

      //Declaração de variaveis para cada carta:

      char estado1, estado2; // Estado para cada carta.
      char codigo1[10], codigo2[10]; // Codigo para cada carta.
      char nomedacidade1[20], nomedacidade2 [20]; // Nome da cidade para cada carta.
      int populacao1, populacao2; // População para cada carta.
      float area1, area2; // Área para cada carta.
      float pib1, pib2, cdp1, cdp2; //CDP1 = Abreviação para Densidade Populacional para cada carta.
      float pibpercapita1, pibpercapita2; //PIB per Capita para cada carta.
      int numerodepontosturisticos1, numerodepontosturisticos2;  // Pontos turisticos para cada carta.


      //Interação com o usuário para a carta 1.
      
      printf("Insira os dados para a carta 1:\n\n");
      
      printf("Digite uma letra para o estado: \n");
      scanf(" %c", &estado1);

      printf("Digte um código:\n");
      scanf(" %s", &codigo1);

      printf("Digite o nome da cidade: \n");
      scanf(" %s", &nomedacidade1);

      printf("Digite o numero total da população: \n");
      scanf(" %i", &populacao1);

      printf("Digite a área total: \n");
      scanf(" %f", &area1);

      printf ("Digite o PIB: \n");
      scanf(" %f", &pib1);

      printf("Digite o número de pontos turisticos: \n");
      scanf(" %i", &numerodepontosturisticos1);
      
      cdp1 = (populacao1 + area1) /2;  //cdp1 = Calcular a densidade populacional para carta 1.

      pibpercapita1 = (pib1 + populacao1) /2; //PIB per Capita = Calcular Pib Per Capita carta 1.


     //Interação com o usuário para carta 2.

      printf("\nAgora digite os dados para a carta 2:\n\n");

      printf("Digite uma letra para o estado: \n");
      scanf(" %c", &estado2);

      printf("Digte um código: \n");
      scanf(" %s", &codigo2);

      printf("Digite o nome da cidade: \n");
      scanf(" %s", &nomedacidade2);

      printf("Digite o número total da população: \n");
      scanf(" %i", &populacao2);

      printf("Digite a área total: \n");
      scanf(" %f", &area2);

      printf("Digite o PIB: \n");
      scanf(" %f", &pib2);

      printf("Digite o numero de pontos turisticos: \n");
      scanf(" %i", &numerodepontosturisticos2);

      cdp2 = (populacao2 + area2) /2;  //cdp2 = Calcular a densidade populacional para carta 2.

      pibpercapita2 = (pib2 + populacao2) /2; //PIB per Capita = Calcular Pib Per Capita carta 2.

      //Valores mostrados no terminal para carta 1:

      printf("\nCarta1:\n");
      printf("Estado: %c\n", estado1);
      printf("Codigo: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", nomedacidade1);
      printf("População: %i Habitantes\n", populacao1);
      printf("Área: %.2f km²\n", area1);
      printf("PIB: %.2f Bilhões de Reais\n", pib1);
      printf("Densidade Populacional: %.2fhab/km²\n", cdp1);
      printf("PIB Per Capita: %.2f Reais\n\n", pibpercapita1);

      //Valores mostrados no terminal para carta 2:

      printf("Carta 2:\n");
      printf("Estado: %c\n", estado2);
      printf("Codigo: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", nomedacidade2);
      printf("População: %i Habitantes\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f Bilhões de Reais\n", pib2);
      printf("Densidade Populacional: %.2fhab/km²\n", cdp2);
      printf("PIB Per Capita: %.2f Reais\n\n", pibpercapita2);

      return 0;
}
