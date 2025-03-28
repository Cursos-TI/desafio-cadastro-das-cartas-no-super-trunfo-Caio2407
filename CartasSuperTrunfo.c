#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Definição das cartas

   // Estrutura para representar os dados de uma cidade
typedef struct {
    char estado[2]; // Código do estado (Ex: "A", "B", ...,)
    int cidade;     // Número da cidade (1 a 4)
    int populacao;  // População da cidade
    float area;     // Área da cidade (em km²)
    float pib;      // PIB da cidade
    int pontosTuristicos; // Número de pontos turísticos
} Carta;
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
        // Declarar duas cartas (duas cidades)
    Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Cidade: ");
    scanf("%d", &carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Cidade: ");
    scanf("%d", &carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 // Exibição dos dados cadastrados
 printf("\nDados da Carta 1:\n");
 printf("Estado: %s\n", carta1.estado);
 printf("Cidade: %d\n", carta1.cidade);
 printf("População: %d\n", carta1.populacao);
 printf("Área: %.2f km²\n", carta1.area);
 printf("PIB: %.2f\n", carta1.pib);
 printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

 printf("\nDados da Carta 2:\n");
 printf("Estado: %s\n", carta2.estado);
 printf("Cidade: %d\n", carta2.cidade);
 printf("População: %d\n", carta2.populacao);
 printf("Área: %.2f km²\n", carta2.area);
 printf("PIB: %.2f\n", carta2.pib);
 printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);


return 0;
}
