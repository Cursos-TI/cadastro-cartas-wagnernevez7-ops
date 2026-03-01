#include <stdio.h>

int main(){

     float nota1, nota2, nota3, nota4;
    float media;

    printf("***Calculando a média das notas***\n");

    printf("\n");

    printf("Digite a primeira nota em Português:\n ");
    scanf("%f.2", &nota1);

    printf("Digite a segunda nota em Matemática:\n ");
    scanf("%f.2", &nota2);

    printf("Digite a terceira nota em História:\n ");
    scanf("%f.2", &nota3);

    printf("Digite a quarta nota em Ciências:\n ");
    scanf("%f.2", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("A média das notas é: %.2f\n", media);

    return 0;
}