#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//C�lculo da �rea do Tri�ngulo e C�rculo


int main()
{
    //�rea Tri�ngulo
    double Base = 10;
    double Altura = 3.5;
    double AreaT;
    AreaT = Base*Altura/2;

    setlocale(LC_ALL,"Portuguese");
    printf("A �rea do tri�ngulo �: %.2lf\n",AreaT);

    //�rea C�rculo
    double raio = 30;
    double pi = 3.14155926;
    double AreaC;
    AreaC = pi*raio*raio;

    setlocale(LC_ALL,"Portuguese");
    printf("A �rea do c�rculo �: %.2lf",AreaC);



    return(21);
}


/*�rea C�rculo
    int raio = 30;
    float pi = 3.14;
    double Area;
    Area = pi*raio*raio;

    setlocale(LC_ALL,"Portuguese");
    printf("A �rea do c�rculo �: %lf",Area);*/

