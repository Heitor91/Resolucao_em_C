#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros inteiros positivos.*/
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
        printf("A soma do sequencial at� %d �: %d", entrada, somatorio);
    }
    else{
        printf("Valor n�o calcul�vel");
        main();
    }
    return 0;
}
