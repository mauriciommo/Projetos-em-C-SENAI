#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Converter uma temperatura em graus Fahrenheit e a converta para a escala Celsius.

int main()
{

    float far;
    float cel;


    setlocale(LC_ALL,"Portuguese");
    printf("Faça a conversão de temperatura.\n");
    printf("\nDigite a temperatura em Graus Fahrenheit: ");
    scanf("%f",&far);
    cel = (5*far-160)/9;
    printf("\nA temperatura escolhida equivale a: %.2f Graus Celsius\n",cel);

    return(21);


}


