#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//

int main()
{

    int ladoA;
    int ladoB;
    int Area;

    setlocale(LC_ALL,"Portuguese");

    printf("Digite Lado A: ");
    scanf("%i",&ladoA);

    printf("Digite Lado B: ");
    scanf("%i",&ladoB);

    Area = ladoA*ladoB;
    printf("O valor da área do retângulo é: %i", Area);

    return(21);


}
