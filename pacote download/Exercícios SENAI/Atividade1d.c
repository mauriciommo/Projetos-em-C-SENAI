#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Calcular a �rea do c�rculo, sendo Pi = 3,14

int main()
{
    float pi = 3.14;
    float raio;
    float area;

    setlocale(LC_ALL,"Portuguese");
    printf("Ol�, calcule a �rea do C�rculo.\n");
    printf("\nDigite o valor do Raio: ");
    scanf("%f",&raio);
    area = pi * raio * raio;
    printf("\nA �rea �: %.2f\n", area);

return(21);

}
