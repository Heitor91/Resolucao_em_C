#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Dados n e uma seq��ncia de n n�meros inteiros, determinar a soma dos n�meros pares*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade_de_numeros, numero, soma_pares = 0;
    printf("Insira a quantidade de n�meros ou 0 para sair: ");
    scanf("%d", &quantidade_de_numeros);
    if(quantidade_de_numeros > 0)
    {
        for(int vez_da_sequencia = 1; vez_da_sequencia <= quantidade_de_numeros; vez_da_sequencia++)
        {
            printf("Digite um numero %d de %d: ", vez_da_sequencia, quantidade_de_numeros);
            scanf("%d", &numero);
            if(numero%2 == 0)
                soma_pares += numero;
        }
        printf("A soma dos numeros pares �: %d \n", soma_pares);
        system("pause");
        system("cls");
        main();
    }
    else if(quantidade_de_numeros < 0)
    {
        printf("Valor inv�lido, tente novamente!\n");
        main();
    }
    return 0;
}
