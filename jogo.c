#include <stdio.h>

int main(){
    float populacao =2.000000;
    int pontos_turisticos =7;
    float area_em_KM² =22.05;
    float pib =57.00000;
    char estado[100] = "ceara";
    char cidade [100] = "fortaleza";
    char primeira_carta [100] = "A01"; // nome  da Primeira carta
    float densidade_Poulacional = 2.000000 / 22.050000;
    float pib_per_capita = (float) 57.000000 / 2000000;
    

    printf("digite o nome da Primeira carta:\n");
    scanf("%s", &primeira_carta);
    
    printf("Primeira Carta: %s\n", primeira_carta);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("População da cidade: %.3f,000\n", populacao);
    printf("KM² da area: %.3f\n", area_em_KM²);
    printf("Pib: %.3f,000\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("densidade da Poulacao e de: %.3f\n", densidade_Poulacional);
    printf("Pib Per capita e de: %f\n\n\n\n", pib_per_capita);


    

    float Populacao =2.400000;
    int Pontos_turisticos =8;
    float Area_em_KM² =692.000;
    float Pib = 62.000;
    char Estado[100] = "Bahia";
    char Cidade [100] = "Salvador";
    char Segunda_carta [100] = "A02"; // nome da segunda carta
    float Densidade_Poulacional = 2.400000 / 692.000;
    float Pib_per_capita = (double) 2000000 / 620.000;



    printf("Digite o nome da segunda Carta: %s\n");
    scanf("%s", &Segunda_carta);

    printf("Segunda carta %s\n", Segunda_carta);
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População da cidade: %.3f,000\n", Populacao);
    printf("KM² da area: %.3f\n", Area_em_KM²);
    printf("Pib: %.3f,00\n", Pib);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);
    printf("densidade da Poulacao e de: %.3f\n", Densidade_Poulacional);
    printf("Pib Per capita e de: %f\n", Pib_per_capita);



    
    return 0;
    
    
    
}