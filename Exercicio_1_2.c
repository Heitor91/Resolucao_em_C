#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada = 0;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &entrada);
    if(entrada > 0)
    {
        int somatorio = 0;
        for(int numero = 1; numero <=entrada; numero++)
        {
            somatorio += numero;
        }
        printf("A soma do sequencial até %d é: %d", entrada, somatorio);
    }
    else{
        printf("Valor não calculável");
        main();
    }
    return 0;
}
