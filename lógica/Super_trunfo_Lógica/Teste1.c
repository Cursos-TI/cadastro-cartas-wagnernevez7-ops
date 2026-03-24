#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 570;

    printf("Entre com a temperatura: \n");
    scanf("%f.2", &temperatura);
    printf("entre com a umidade: \n");
    scanf("%f.2", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("temperatura está alta \n");
    } else {
        printf("temperatura está dentro dos padrões \n");
        }
        if (umidade > 60){
            printf("umidade está alta \n");
        } else {
            printf("umidade está dentro dos padrões \n");
        }
        if (estoque < estoqueMinimo){
            printf("estoque abaixo do mínimo \n");
        } else {
            printf("estoque dentro dos padrões \n");
        }
    return 0;
}