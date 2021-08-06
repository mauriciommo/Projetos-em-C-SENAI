#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Variável Int - Idade e ano de nascimento

int main()
{
    int ano = 2021;
    int anoNascimento;
    int calculoIdade;


    setlocale(LC_ALL,"Portuguese");
    printf("Olá, calcule sua idade com nosso programa.\n");
    printf("Digite o seu ano de nascimento: ");
    scanf("%i", &anoNascimento);
    calculoIdade = ano - anoNascimento;
    printf("Sua idade é: %i", calculoIdade);

    return(21);

}
