#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//C�lculo m�dia 4 Bimestres

int main()
{

    double Media;
    double B1;
    double B2;
    double B3;
    double B4;

    setlocale(LC_ALL, "Portuguese");

    printf("Ol� seja bem-vindo ao programa que calcula sua m�dia anual\n");
    printf("Digite o valor da sua nota do 1� Bimestre: ");
    scanf("%lf",&B1);
    printf("Digite o valor da sua nota do 2� Bimestre: ");
    scanf("%lf",&B2);
    printf("Digite o valor da sua nota do 3� Bimestre: ");
    scanf("%lf",&B3);
    printf("Digite o valor da sua nota do 4� Bimestre: ");
    scanf("%lf",&B4);

    Media = (B1+B2+B3+B4)/4;

    printf("A m�dia �: %.2lf", Media);

    return(21);

}
