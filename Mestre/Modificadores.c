#include <stdio.h>

int main() {

    //declarar variáveis de produtos, estoque, valor unitário, valor total e demais variáveis necessárias.
    char Caminhao[50] = "TRUCK";
    char Carro[50] = "FIORINO";

    unsigned int EstoqueCaminhao = 20;
    unsigned int EstoqueCarro = 15;

    float ValorUnitarioCaminhao = 369587.55;
    float ValorUnitarioCarro = 92537.30;

    unsigned int estoqueminimocaminhao = 10;
    unsigned int estoqueminimocarro = 5;

    double ValorTotalCaminhao;
    double ValorTotalCarro;

    int resultadoCaminhao, resultadoCarro;

    //exibir as informações dos produtos, estoque, valor unitário e valor total.
    printf("Produto: %s\n Tem estoque %u e o valor unitário é R$ %.2f\n", Caminhao, EstoqueCaminhao, ValorUnitarioCaminhao);
    printf("Produto: %s\n Tem estoque %u e o valor unitário é R$ %.2f\n", Carro, EstoqueCarro, ValorUnitarioCarro);

    //comparação com o valor mínimo de estoque.
    resultadoCaminhao = EstoqueCaminhao > estoqueminimocaminhao;
    resultadoCarro = EstoqueCarro > estoqueminimocarro;

    printf("O Caminhão %s tem estoque mínimo %d", Caminhao, resultadoCaminhao);
    printf("O Carro %s tem estoque mínimo %d", Carro, resultadoCarro);

    // Comparação entre os valores totais dos insumos.
    printf("valor total do caminhão (R$ %.2f) é maior que o valor total do carro (R$ %.2f): %d\n", (EstoqueCaminhao * ValorUnitarioCaminhao), (EstoqueCarro * ValorUnitarioCarro), (EstoqueCaminhao * ValorUnitarioCaminhao) > (EstoqueCarro * ValorUnitarioCarro));

}