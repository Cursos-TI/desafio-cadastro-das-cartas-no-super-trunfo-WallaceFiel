#include <stdio.h> 
   
int main() {
    
    // Primeira carta 1

    int Populacao1, PontosTuristicos1;
    float Area1, PIB1;

    printf(" Quantidade da população? ");
    scanf("%d" , &Populacao1);

    printf(" Tamanho da Área? ");
    scanf("%f", &Area1);

    printf(" PIB do local? ");
    scanf("%f", &PIB1);

    printf(" Numero de pontos turísticos? ");
    scanf("%d", &PontosTuristicos1);

    printf(" População: %d\n Area: %f\n", Populacao1, Area1);
    printf(" PIB: %f\n NumeroT: %d\n", PIB1, PontosTuristicos1);


    // Segunda carta 2

    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;

    printf(" Quantidade da população? ");
    scanf("%d" , &Populacao2);

    printf(" Tamanho da Área? ");
    scanf("%f", &Area2);

    printf(" PIB do local? ");
    scanf("%f", &PIB2);

    printf(" Numero de pontos turísticos? ");
    scanf("%d", &PontosTuristicos2);

    printf(" População: %d\n Area: %f\n", Populacao2, Area2);
    printf(" PIB: %f\n NumeroT: %d\n", PIB2, PontosTuristicos2);

    return 0;
}
