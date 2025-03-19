#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Wallace Fiel

int main() {
    
    // Primeira carta

    int Populacao;
    float Area, PIB;
    int NumeroT;         // Numero de pontos turísticos

    printf(" Quantidade da população? ");
    scanf("%d" , &Populacao);

    printf(" Tamanho da Área? ");
    scanf("%f", &Area);

    printf(" PIB do local? ");
    scanf("%f", &PIB);

    printf(" Numero de pontos turísticos? ");
    scanf("%d", &NumeroT);

    printf(" População: %d\n Area: %f\n", Populacao, Area);
    printf(" PIB: %f\n NumeroT: %d\n", PIB, NumeroT);


    // Segunda carta

    int Populacao2;
    float Area2, PIB2;
    int NumeroT2;         // Numero de pontos turísticos

    printf(" Quantidade da população? ");
    scanf("%d" , &Populacao2);

    printf(" Tamanho da Área? ");
    scanf("%f", &Area2);

    printf(" PIB do local? ");
    scanf("%f", &PIB2);

    printf(" Numero de pontos turísticos? ");
    scanf("%d", &NumeroT2);

    printf(" População: %d\n Area: %f\n", Populacao2, Area2);
    printf(" PIB: %f\n NumeroT: %d\n", PIB2, NumeroT2);



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
