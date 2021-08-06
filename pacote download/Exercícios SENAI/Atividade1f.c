#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Ler matéria, nome do aluno e informar média de quatro notas bimestrais e disciplina escolhida.

int main()
{
    float B1,B2,B3,B4,media;
    char materia[50];
    char nome[50];

    setlocale(LC_ALL, "Portuguese");
    printf("Olá, calcule abaixo a média anual.\n\n");
    printf("Digite o nome do estudante: ");
    gets(nome);
    printf("\nInforme a matéria: ");
    gets(materia);
    printf("\nDigite a nota do 1º Bimestre: ");
    scanf("%f",&B1);
    printf("\nDigite a nota do 2º Bimestre: ");
    scanf("%f",&B2);
    printf("\nDigite a nota do 3º Bimestre: ");
    scanf("%f",&B3);
    printf("\nDigite a nota do 4º Bimestre: ");
    scanf("%f",&B4);

    media = (B1+B2+B3+B4)/4;


    printf("\nCaro aluno, ");
    printf(nome);
    printf(", sua média anual em %s", materia);
    printf(" foi: %.2f\n", media);

    return(21);


}
