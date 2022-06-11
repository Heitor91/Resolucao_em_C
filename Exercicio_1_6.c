#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*Dados o n�mero n de alunos de uma turma de Introdu��o aos Aut�matos a Pilha (MAC 414) e suas notas da primeira prova
  Determinar:
  - A maior e
  - A menor nota obtidas por essa turma
  - (Nota m�xima = 100 e nota m�nima = 0)*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade_de_alunos, maior_nota = 0, menor_nota = 100;
    printf("Insira a quantidade de alunos de MAC414 ou 0 para sair: ");
    scanf("%d", &quantidade_de_alunos);
    if(quantidade_de_alunos > 0)
    {
        for(int numero_aluno = 1; numero_aluno <= quantidade_de_alunos; numero_aluno++)
        {
            int nota = -1;
            while(nota < 0 || nota > 100)
            {
                printf("Digite a nota do %d� aluno: ", numero_aluno);
                scanf("%d", &nota);
                if(nota < 0)
                    printf("Nota menor que o permitido (menor valor poss�vel = 0)\n");
                else if(nota > 100)
                    printf("Nota maior que o permitido (maior valor poss�vel = 100)\n");
            }
            if(nota > maior_nota)
                maior_nota = nota;
            if(nota < menor_nota)
                menor_nota = nota;
        }
        printf("A maior nota da turma foi: %d\n", maior_nota);
        printf("A menor nota da turma foi: %d\n", menor_nota);
        system("pause");
        system("cls");
        main();
    }
    else if(quantidade_de_alunos < 0)
    {
        printf("Valor inv�lido, tente novamente!\n");
        main();
    }
    return 0;
}
