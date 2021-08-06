#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Cálculo média 4 Bimestres

int main()
{

    double Media;
    double B1;
    double B2;
    double B3;
    double B4;

    setlocale(LC_ALL, "Portuguese");

    printf("Olá seja bem-vindo ao programa que calcula sua média anual\n");
    printf("Digite o valor da sua nota do 1º Bimestre: ");
    scanf("%lf",&B1);
    printf("Digite o valor da sua nota do 2º Bimestre: ");
    scanf("%lf",&B2);
    printf("Digite o valor da sua nota do 3º Bimestre: ");
    scanf("%lf",&B3);
    printf("Digite o valor da sua nota do 4º Bimestre: ");
    scanf("%lf",&B4);

    Media = (B1+B2+B3+B4)/4;

    printf("A média é: %.2lf", Media);

    return(21);

}
