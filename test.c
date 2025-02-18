#include <stdio.h>

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

    return 0;
}