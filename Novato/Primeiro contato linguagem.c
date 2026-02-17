#include <stdio.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[50];
   
    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("digite seu nome: \n");
    scanf("%s", nome);

    printf("nome do aluno: %s\n matricula: %d\n idade: %d\n23 altura: %.2f\n", nome, matricula, idade, altura); 

    return 0; }