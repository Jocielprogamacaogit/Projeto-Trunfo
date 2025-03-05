
#include  <stdio.h>
#include <string.h>

int main(){

char estado;
char codigo_carta [4];
char nome_cidade[50];
int populacao;
float area, pib;
int numero_pontos_turisticos;


char estado2;
char codigo_carta2 [4];
char nome_cidade2[50];
int populacao2;
float area2, pib2;
int numero_pontos_turisticos2;


 
 printf("Digite os dados da Carta :\n");
 printf("Estado (A a H): ");
 scanf(" %c", &estado);  
 printf("Código (A01, B03): ");
 scanf("%s", codigo_carta);
 printf("Nome da Cidade: ");
 getchar(); 
 fgets(nome_cidade, 100, stdin);
 nome_cidade[strcspn(nome_cidade, "\n")] = '\0';  
 printf("População: ");
 scanf("%d", &populacao);
 printf("Área (em km²): ");
 scanf("%f", &area);
 printf("PIB (em bilhões de reais): ");
 scanf("%f", &pib);
 printf("Número de Pontos Turísticos: ");
 scanf("%d", &numero_pontos_turisticos);

 
 printf("\nDigite os dados da Carta :\n");
 printf("Estado (A a H): ");
 scanf(" %c", &estado2);  
 printf("Código (A01, B03): ");
 scanf("%s", codigo_carta2);
 printf("Nome da Cidade: ");
 getchar(); 
 fgets(nome_cidade2, 100, stdin);
 nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';  
 printf("População: ");
 scanf("%d", &populacao2);
 printf("Área (em km²): ");
 scanf("%f", &area2);
 printf("PIB (em bilhões de reais): ");
 scanf("%f", &pib2);
 printf("Número de Pontos Turísticos: ");
 scanf("%d", &numero_pontos_turisticos2);

 
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo_carta2);
 printf("Nome da Cidade: %s\n", nome_cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);

 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo_carta2);
 printf("Nome da Cidade: %s\n", nome_cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);



 return 0;






}
