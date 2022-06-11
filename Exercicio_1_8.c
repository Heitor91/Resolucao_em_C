#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Dado um inteiro não-negativo n, determinar n!*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, fatorial = 1;
    printf("Insira um valor inteiro positivo ou 0 para sair: ");
    scanf("%d", &numero);
    if(numero > 0)
    {
        for(int fator = 1; fator <= numero; fator++)
        {
            fatorial *= fator;
        }
        printf("O fatorial de %d é: %d \n", numero, fatorial);
        system("pause");
        system("cls");
        main();
    }
    else if(numero < 0)
    {
        printf("Valor inválido, tente novamente!\n");
        main();
    }
    return 0;
}
