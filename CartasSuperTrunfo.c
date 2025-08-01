#include <stdio.h>

int main() {

      //Declaração de variaveis para cada carta:

      char estado1, estado2;
      char codigo1[10], codigo2[10];
      char nomedacidade1[20], nomedacidade2 [20];
      int populacao1, populacao2;
      float area1, area2;
      float pib1, pib2;
      int numerodepontosturisticos1, numerodepontosturisticos2;

      //Interação com o usuário para a carta 1.
      
      printf("Insira os dados para a carta 1:\n\n");
      
      printf("Digite uma letra para o estado: \n", estado1);
      scanf(" %c", &estado1);

      printf("Digte um código:\n", codigo1);
      scanf(" %s", &codigo1);

      printf("Digite o nome da cidade: \n", nomedacidade1);
      scanf(" %s", &nomedacidade1);

      printf("Digite o numero total da população: \n", populacao1);
      scanf(" %i", &populacao1);

      printf("Digite a área total: \n", area1);
      scanf(" %f", &area1);

      printf ("Digite o PIB: \n", pib1);
      scanf(" %f", &pib1);

      printf("Digite o número de pontos turisticos: \n", numerodepontosturisticos1);
      scanf(" %i", &numerodepontosturisticos1);
      
     //Interação com o usuário para carta 2.

      printf("\nAgora digite os dados para a carta 2:\n\n");

      printf("Digite uma letra para o estado: \n", estado2);
      scanf(" %c", &estado2);

      printf("Digte um código: \n", codigo2);
      scanf(" %s", &codigo2);

      printf("Digite o nome da cidade: \n", nomedacidade2);
      scanf(" %s", &nomedacidade2);

      printf("Digite o número total da população: \n", populacao2);
      scanf(" %i", &populacao2);

      printf("Digite a área total: \n", area2);
      scanf(" %f", &area2);

      printf("Digite o PIB: \n", pib2);
      scanf(" %f", &pib2);

      printf("Digite o numero de pontos turisticos: \n", numerodepontosturisticos2);
      scanf(" %i", &numerodepontosturisticos2);

      //Valores mostrados para carta 1:

      printf("\nCarta1:\n");
      printf("Estado: %c\n", estado1);
      printf("Codigo: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", nomedacidade1);
      printf("População: %i\n", populacao1);
      printf("Área: %.2f\n", area1);
      printf("PIB: %.2f\n\n", pib1);

      //Valores mostrados para carta 2:

      printf("Carta 2:\n");
      printf("Estado: %c\n", estado2);
      printf("Codigo: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", nomedacidade2);
      printf("População: %i\n", populacao2);
      printf("Área: %.2f\n", area2);
      printf("PIB: %.2f\n", pib2);
      return 0;
}
