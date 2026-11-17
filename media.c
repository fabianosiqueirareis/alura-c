#include <stdio.h>

int main(void){
    float notal, nota2, media;
    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);


    printf("Digite a primeira nota\n");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n" , media);
    return 0;

    media = (nota1 + nota2 + nota3) / 3;
    printf("Media: %.2f\n", media);
    return 0;
}