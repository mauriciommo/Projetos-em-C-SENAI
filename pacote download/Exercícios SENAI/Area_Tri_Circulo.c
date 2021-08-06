#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Cálculo da Área do Triângulo e Círculo


int main()
{
    //Área Triângulo
    double Base = 10;
    double Altura = 3.5;
    double AreaT;
    AreaT = Base*Altura/2;

    setlocale(LC_ALL,"Portuguese");
    printf("A área do triângulo é: %.2lf\n",AreaT);

    //Área Círculo
    double raio = 30;
    double pi = 3.14155926;
    double AreaC;
    AreaC = pi*raio*raio;

    setlocale(LC_ALL,"Portuguese");
    printf("A área do círculo é: %.2lf",AreaC);



    return(21);
}


/*Área Círculo
    int raio = 30;
    float pi = 3.14;
    double Area;
    Area = pi*raio*raio;

    setlocale(LC_ALL,"Portuguese");
    printf("A área do círculo é: %lf",Area);*/

