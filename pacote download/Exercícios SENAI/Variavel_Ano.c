#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Vari�vel Int - Idade e ano de nascimento

int main()
{
    int ano = 2021;
    int anoNascimento;
    int calculoIdade;


    setlocale(LC_ALL,"Portuguese");
    printf("Ol�, calcule sua idade com nosso programa.\n");
    printf("Digite o seu ano de nascimento: ");
    scanf("%i", &anoNascimento);
    calculoIdade = ano - anoNascimento;
    printf("Sua idade �: %i", calculoIdade);

    return(21);

}
