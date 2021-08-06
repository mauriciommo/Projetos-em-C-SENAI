#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Cálculo da Área do Triângulo e Círculo co entradas

int main()
{
    //Área Triângulo
    double Base;
    double Altura;
    double AreaT;

    setlocale(LC_ALL,"Portuguese");

    printf("Calcule a Área do Triângulo\n");
    printf("Digite o valor da Base do Triângulo: ");
    scanf("%lf",&Base);

    printf("Digite o valor da Altura: ");
    scanf("%lf",&Altura);

    AreaT = Base*Altura/2;

    printf("A área do triângulo é: %.lf\n", AreaT);


    //Área Círculo
    double raio;
    double pi = 3.14155926;
    double AreaC;

    setlocale(LC_ALL,"Portuguese");

    printf("\nAgora calcule a Área do Círculo\n");
    printf("Digite o valor do Raio do Círculo: ");
    scanf("%lf",&raio);

    AreaC = pi*raio*raio;

    printf("A área do círculo é: %.2lf",AreaC);
    printf("\nO valor utilizado para pi foi de 3,14155926.");

return(21);

}
