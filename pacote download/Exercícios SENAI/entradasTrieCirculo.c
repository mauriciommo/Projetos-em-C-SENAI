#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//C�lculo da �rea do Tri�ngulo e C�rculo co entradas

int main()
{
    //�rea Tri�ngulo
    double Base;
    double Altura;
    double AreaT;

    setlocale(LC_ALL,"Portuguese");

    printf("Calcule a �rea do Tri�ngulo\n");
    printf("Digite o valor da Base do Tri�ngulo: ");
    scanf("%lf",&Base);

    printf("Digite o valor da Altura: ");
    scanf("%lf",&Altura);

    AreaT = Base*Altura/2;

    printf("A �rea do tri�ngulo �: %.lf\n", AreaT);


    //�rea C�rculo
    double raio;
    double pi = 3.14155926;
    double AreaC;

    setlocale(LC_ALL,"Portuguese");

    printf("\nAgora calcule a �rea do C�rculo\n");
    printf("Digite o valor do Raio do C�rculo: ");
    scanf("%lf",&raio);

    AreaC = pi*raio*raio;

    printf("A �rea do c�rculo �: %.2lf",AreaC);
    printf("\nO valor utilizado para pi foi de 3,14155926.");

return(21);

}
