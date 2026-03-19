#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
int c;

  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  ////Carta 1

char pais[50];
char local[50];
char A_01[50];
char cidade;
int gente;
float tamanho=0;
float produto;
int pontos_turi;
float D_popula;
float pib_per;

////Carta 2

char pais2[50];
char local2[50];
char A_02[50];
char cidade2;
int gente2;
float tamanho2;
float produto2;
int pontos_turi2;
float D_popula2;
float pib_per2;

  // Área para entrada de dados
  while((c=getchar()) !='\n' && c!=EOF);
  ////Carta 1
  printf("Carta 1:");
  scanf("%s",pais);

  printf("Estado:");
  scanf(" %s",local);

  printf("Código:");
  scanf(" %s", A_01);

  printf("Nome da Cidade:");
  scanf(" %s", &cidade);

  printf("População:");
  scanf("%d", &gente);

  printf("Área:");
  scanf("%f", &tamanho);

  printf("PIB:");
  scanf("%f",&produto);

  printf("Número de Pontos Turísticos:");
  scanf(" %d", &pontos_turi);

  printf("Densidade populacional:%.2f\n", gente / tamanho);
  
  
  printf("PIB per capita:%.2f\n", produto / gente);

    printf("\n")

  ////Carta 2

  printf("Carta 2:");
  scanf("%s",pais2);

  printf("Estado:");
  scanf(" %s",local2);

  printf("Código:");
  scanf(" %s", A_02);

  printf("Nome da Cidade:");
  scanf(" %s", &cidade2);

  printf("População:");
  scanf("%d", &gente2);

  printf("Área:");
  scanf("%f", &tamanho2);

  printf("PIB:");
  scanf("%f",&produto2);

  printf("Número de Pontos Turísticos:");
  scanf(" %d", &pontos_turi2);

  printf("Densidade populacional:%.2f\n", gente2 / tamanho2);
  
  
  printf("PIB per capita:%.2f\n", produto2 / gente2);

  // Área para exibição dos dados da cidade

return 0;
} 
