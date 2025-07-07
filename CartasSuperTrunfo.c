#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  char estado;
  char codigo;
  char cidade[20];
  char populacao[11];
  float area;
  float pib;
  int pontos_turisticos;

    printf("DESAFIO SUPER TRUNFO \n");
    printf("CADASTRO DAS CARTAS \n \n");

    printf("CARTA 1 \n"); //identificação da primeira carta
    
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Informe o codigo: \n");
    scanf("%s", &codigo);

    printf("Informe a cidade: \n");
    scanf("%s", &cidade);

    printf("informe a população: \n");
    scanf("%s", &populacao);

    printf("Informe a área em Km2: \n");
    scanf("%s", &area);

    printf("Informe o PIB: \n");
    scanf("%d", &pib);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos):

   printf("CARTA 1 - Codigo: %s \n", codigo);
   printf("ESTADO: %s - CIDADE: %s \n", estado, cidade);
   printf("POPULAÇÃO: %s \n", populacao);
   printf("ÁREA EM Km2: %s \n", area);
   printf("PIB: %d \n", pib);
   printf("PONTOS TURISTICOS: %d \n", pontos_turisticos)
  









  
  

   // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
