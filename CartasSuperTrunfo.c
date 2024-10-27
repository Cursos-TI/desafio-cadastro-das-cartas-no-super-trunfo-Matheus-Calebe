#include <stdio.h>
int main() {
    //tipos de dados que serão coletados
    char Estado [50];
    char Codigo [4];
    char Cidade [50];
    int Populacao;
    float Area;
    float PIB;
    int Turismo;
    //entrada de dados
    printf("digite o Estado:");
    scanf("%s", &Estado);

    printf("digite o Código:");
    scanf("%s", &Codigo);

    printf("digite a Cidade:");
    scanf("%s", &Cidade);

    printf("digite a População:");
    scanf("%d", &Populacao);

    printf("digite a Área em km²");
    scanf("%f", &Area);

    printf("digite o PIB:");
    scanf("%f", &PIB);

    printf("digite o Número de pontos turísticos:");
    scanf("%d", &Turismo);
    //saída de dados
    printf("Estado:%s\n", Estado);
    printf("Código:%s\n", Codigo);
    printf("Cidade:%s\n", Cidade);
    printf("População:%d\n", Populacao);
    printf("Área em km²:%f\n", Area);
    printf("PIB:%f\n", PIB);
    printf("Número de pontos turísticos:%d\n", Turismo);

    return 0;
}
