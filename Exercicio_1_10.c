#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Dados n e dois n�meros inteiros positivos i e j diferentes de 0
    -imprimir em ordem crescente os n primeiros naturais que s�o m�ltiplos de i ou de j e ou de ambos*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, ref, memoria;
    printf("Insira o valor ou 0 para sair: ");
    scanf("%d", &numero);
    if(numero > 0)
    {
        for(ref = 2; (ref-1)*ref*(ref+1) <= numero; ref++)
        {
            printf("Procurando...");
            memoria = (ref-1)*ref*(ref+1);
            system("cls");
        }
        if(memoria == numero)
            printf("%d � triangular de %d * %d * %d \n", numero, (ref-2), (ref-1) ,ref);
        else
            printf("%d n�o � triangular\n");
        main();
    }
    else if(numero < 0)
    {
        printf("Valor inv�lido, tente novamente!\n");
        main();
    }
    return 0;
}
