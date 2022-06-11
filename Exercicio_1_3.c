#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.

Exemplo: Para n=4 a sa�da dever� ser 1,3,5,7.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada = 0;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &entrada);
    if(entrada > 0)
    {
        printf("Sequencia de %d �mpares:\n", entrada);
        for(int numero = 0; numero < entrada; numero++)
        {
            printf("%d\t",1 + numero*2);
            if((numero+1)%10 == 0)
                printf("\n");
        }
        printf("\n");
        main();
    }
    else if(entrada == 0)
    {
        printf("Obrigado volte sempre!!!\n");
        return 0;
    }
    else
    {
        printf("Valor inv�lido\n");
        main();
    }
    return 0;
}
