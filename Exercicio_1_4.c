#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Dados um inteiro x e um inteiro não-negativo n, calcular x^n*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int base = 0, potencia = 0;
    printf("Digite uma base inteira ou 0 para sair:");
    scanf("%d", &base);
    if(base == 0)
    {
        printf("Obrigado volte sempre!!!\n");
        return 0;
    }
    printf("Digite uma potêcia inteira positiva:");
    scanf("%d", &potencia);
    if(potencia > 0)
    {
        int resultado;
        printf("O resultado de %d^%d = %d \n", base, potencia, resultado = pow(base,potencia));
        main();
    }
    else
    {
        printf("Valor inválido\n");
        main();
    }
    return 0;
}
