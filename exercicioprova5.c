#include <stdio.h>
#include <string.h>

int i = 0;
char produtos[10][50];
float valores[10];
float maiorValor = 0;
float menorValor = 0;
int produtosValorMaiorA100 = 0;
float somaTotal = 0;

void coleta()
{
    printf("Digite o nome dos produtos e seus valores: \n");
    for (i = 0; i < 10; i++)
    {
        printf("Produto %i: ", i + 1);
        scanf("%s", produtos[i]);

        printf("Valor: ");
        scanf("%f", &valores[i]);

        somaTotal += valores[i];
    }
}

void comparacao()
{
    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > valores[(int)maiorValor])
        {
            maiorValor = i;
        }
        if (valores[i] < valores[(int)menorValor]) {
            menorValor = i;
        }
        if (valores[i] > 100) {
            produtosValorMaiorA100++;
        }
    }
}

void resultados()
{
    printf("Produto com maior valor: %s (R$%.2f)\n", produtos[(int)maiorValor], valores[(int)maiorValor]);
    printf("Produto com menor valor: %s (R$%.2f)\n", produtos[(int)menorValor], valores[(int)menorValor]);
    printf("Quantidade de produtos de valor > 100: %d\n", produtosValorMaiorA100);
    printf("Soma total dos produtos: R$%.2f\n", somaTotal);
}

int main()
{
    coleta();
    comparacao();
    resultados();
    return 0;
}
