#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
Dada uma seq��ncia de n�meros inteiros n�o-nulos, seguida por 0, imprimir seus quadrados.
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int entrada = 1;
    while(entrada != 0)
    {
        printf("Digite um numero inteiro ou 0 para sair:");
        scanf("%d", &entrada);
        if(entrada != 0)
        {
            int quadrado = entrada * entrada;
            printf("O quadrado de %d �: %d\n", entrada, quadrado);
        }
    }
    return 0;
}
