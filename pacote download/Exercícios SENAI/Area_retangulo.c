#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//C�lculo da �rea do Ret�ngulo


int main()
{
    int ladoA = 10;
    int ladoB = 20;
    int Area;
    Area = ladoA*ladoB;

    setlocale(LC_ALL,"Portuguese");
    printf("A �rea do ret�ngulo �: %i",Area);

    return(21);
}

