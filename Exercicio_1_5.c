#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos.
  Determinar:
    - Em que dia desse mês ocorreu a maior venda
    - Qual foi a quantidade de discos vendida nesse dia.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor = 0, maior_valor = 0, maior_valor_dia;
    for(int dia = 1; dia <= 31; dia++)
    {
        printf("Digite a quantidade de discos vendidos no dia %d: ", dia);
        scanf("%d", &valor);
        if (valor < 0)
        {
            printf("Valor inválido, tente novamente!\n");
            dia--;
        }
        else if(valor > maior_valor)
        {
            maior_valor = valor;
            maior_valor_dia = dia;
        }
    }
    printf("%d de Março foi do dia com mais vendas com %d discos vendidos", maior_valor_dia, maior_valor);
    return 0;
}
