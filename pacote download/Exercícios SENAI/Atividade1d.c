#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Calcular a área do círculo, sendo Pi = 3,14

int main()
{
    float pi = 3.14;
    float raio;
    float area;

    setlocale(LC_ALL,"Portuguese");
    printf("Olá, calcule a área do Círculo.\n");
    printf("\nDigite o valor do Raio: ");
    scanf("%f",&raio);
    area = pi * raio * raio;
    printf("\nA Área é: %.2f\n", area);

return(21);

}
