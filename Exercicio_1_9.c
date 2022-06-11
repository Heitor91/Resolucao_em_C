#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Dados n e dois números inteiros positivos i e j diferentes de 0
    -imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int qtd_numeros, pri_multiplo = 0, seg_multiplo = 0;
    printf("Insira a quantidade de numeros a ser exibido ou 0 para sair: ");
    scanf("%d", &qtd_numeros);
    if(qtd_numeros > 0)
    {
        while(pri_multiplo < 1)
        {
            printf("Insira o primeiro valor positivo: ");
            scanf("%d", &pri_multiplo);
            if(pri_multiplo < 1)
                printf("Valor inválido\n");
        }
        while(seg_multiplo < 1)
        {
            printf("Insira o segundo valor positivo: ");
            scanf("%d", &seg_multiplo);
            if(seg_multiplo < 1)
                printf("Valor inválido\n");
        }
        int pri_contador = 0, seg_contador = 0, valor;
        for(int numero = 1; numero <= qtd_numeros; numero++)
        {
            if(pri_contador*pri_multiplo < seg_contador*seg_multiplo)
            {
                valor = pri_multiplo*pri_contador;
                pri_contador ++;
            }
            else if(pri_contador*pri_multiplo > seg_contador*seg_multiplo)
            {
                valor = seg_multiplo*seg_contador;
                seg_contador ++;
            }
            else
            {
                valor = pri_multiplo*pri_contador;
                pri_contador++;
                seg_contador++;
            }
            printf("%d \t", valor);
            if(numero%10 == 0)
                printf("\n");
        }
    }
    else if(qtd_numeros < 0)
    {
        printf("Valor inválido, tente novamente!\n");
        main();
    }
    return 0;
}
