#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Ler mat�ria, nome do aluno e informar m�dia de quatro notas bimestrais e disciplina escolhida.

int main()
{
    float B1,B2,B3,B4,media;
    char materia[50];
    char nome[50];

    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, calcule abaixo a m�dia anual.\n\n");
    printf("Digite o nome do estudante: ");
    gets(nome);
    printf("\nInforme a mat�ria: ");
    gets(materia);
    printf("\nDigite a nota do 1� Bimestre: ");
    scanf("%f",&B1);
    printf("\nDigite a nota do 2� Bimestre: ");
    scanf("%f",&B2);
    printf("\nDigite a nota do 3� Bimestre: ");
    scanf("%f",&B3);
    printf("\nDigite a nota do 4� Bimestre: ");
    scanf("%f",&B4);

    media = (B1+B2+B3+B4)/4;


    printf("\nCaro aluno, ");
    printf(nome);
    printf(", sua m�dia anual em %s", materia);
    printf(" foi: %.2f\n", media);

    return(21);


}
