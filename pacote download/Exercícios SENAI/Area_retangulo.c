#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Cálculo da Área do Retângulo


int main()
{
    int ladoA = 10;
    int ladoB = 20;
    int Area;
    Area = ladoA*ladoB;

    setlocale(LC_ALL,"Portuguese");
    printf("A área do retângulo é: %i",Area);

    return(21);
}

