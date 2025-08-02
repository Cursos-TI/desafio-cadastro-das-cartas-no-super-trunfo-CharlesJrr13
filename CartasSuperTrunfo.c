#include <stdio.h>

int main() {

      //Declaração de variaveis para cada carta:

      char estado1, estado2; // Estado para cada carta.
      char codigo1[10], codigo2[10]; // Codigo para cada carta.
      char nomedacidade1[20], nomedacidade2 [20]; // Nome da cidade para cada carta.
      unsigned long int populacao1, populacao2; // População para cada carta.
      int carta1, carta2;
      float area1, area2; // Área para cada carta.
      float pib1, pib2, cdp1, cdp2; //CDP1 = Abreviação para Densidade Populacional para cada carta.
      float pibpercapita1, pibpercapita2; //PIB per Capita para cada carta.
      int numerodepontosturisticos1, numerodepontosturisticos2;  // Pontos turisticos para cada carta.
      float superpoder1, superpoder2; //Super poder para cada carta.

      //Interação com o usuário para a carta 1.
      
      printf("Insira os dados para a carta 1:\n\n");
      
      printf("Digite uma letra para o estado: \n");
      scanf(" %c", &estado1);

      printf("Digte um código:\n");
      scanf(" %s", codigo1);

      printf("Digite o nome da cidade: \n");
      scanf(" %s", nomedacidade1);

      printf("Digite o numero total da população: \n");
      scanf(" %li", &populacao1); // Uso do "li por se tratar de uma variavel tipo unsigned long int"

      printf("Digite a área total: \n");
      scanf(" %f", &area1);

      printf ("Digite o PIB: \n");
      scanf(" %f", &pib1);

      printf("Digite o número de pontos turisticos: \n");
      scanf(" %i", &numerodepontosturisticos1);
      
      cdp1 = populacao1 / area1;  //cdp1 = Calcular a densidade populacional para carta 1.

      pibpercapita1 = pib1 / populacao1; //PIB per Capita = Calcular Pib Per Capita carta 1.


     //Interação com o usuário para carta 2.

      printf("\nAgora digite os dados para a carta 2:\n\n");

      printf("Digite uma letra para o estado: \n");
      scanf(" %c", &estado2);

      printf("Digte um código: \n");
      scanf(" %s", codigo2);

      printf("Digite o nome da cidade: \n");
      scanf(" %s", nomedacidade2);

      printf("Digite o número total da população: \n");
      scanf(" %li", &populacao2);

      printf("Digite a área total: \n");
      scanf(" %f", &area2);

      printf("Digite o PIB: \n");
      scanf(" %f", &pib2);

      printf("Digite o numero de pontos turisticos: \n");
      scanf(" %i", &numerodepontosturisticos2);

      cdp2 = populacao2 / area2;  //cdp2 = Calcular a densidade populacional para carta 2.

      pibpercapita2 = pib2 / populacao2; //PIB per Capita = Calcular Pib Per Capita carta 2.


      //Valores mostrados no terminal para carta 1:

      printf("\nCarta1:\n");
      
      printf("Estado: %c\n", estado1);
      printf("Codigo: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", nomedacidade1);
      printf("População: %i Habitantes\n", populacao1);
      printf("Área: %.2f km²\n", area1);
      printf("PIB: %.2f Bilhões de Reais\n", pib1);
      printf("Densidade Populacional: %.2fhab/km²\n", cdp1);
      printf("Numero de Pontos Turisticos: %i", numerodepontosturisticos1);
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
      printf("Numero de Pontos Turisticos: %i", numerodepontosturisticos2);
      printf("PIB Per Capita: %.2f Reais\n\n", pibpercapita2);

      //Soma para calculo Super Poder carta 1.
      superpoder1 = (float) populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapita1;

      //Soma para calculo Super Poder carta 2.
      superpoder2 = (float) populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2;

      
      carta1 = (int) populacao1 + area1 + pib1 + cdp1 + pibpercapita1 + superpoder1 > populacao2 + area2 + pib2 + cdp2 + pibpercapita2 + superpoder2;

      carta2 = (int) populacao2 + area2 + pib2 + cdp2 + pibpercapita2 + superpoder2 > populacao1 + area1 + pib1 + cdp1 + pibpercapita1 + superpoder1;

      printf("Comparação das cartas: \n");

      printf("População: (%i)\n",(carta1 > carta2));
      printf("PIB: (%i)\n",(carta1 > carta2));                       
      printf("Pontos Turisticos: (%i)\n",(carta1 > carta2));
      printf("Densidade Populacional: (%i)\n",(carta1 > carta2));
      printf("PIB Per Capita: (%i)\n",(carta1 > carta2));
      printf("Super Poder: (%i)\n\n",(carta1 > carta2));

      return 0;
}
