#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Ler 50 n�meros fornecidos pelo usu�rio e exibir a m�dia.

int main()
{
    float num,media,soma;
    int cont = 1;

    setlocale(LC_ALL,"Portuguese");

    printf("Calcule a m�dia de 50 n�meros");
    while (cont<=50)
        {
        printf("\nDigite o %i� numero:",cont);
        scanf("%f",&num);
        soma = soma + num;
        cont++;
        }

    media = soma/50;

    printf("\nA m�dia �: %.2f\n",media);

    return(21);


}
