#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Programa que exibe os n�meros de 1 a 50 na tela.

int main()
{
    int cont = 1;

    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, veja abaixo os n�meros de 1 a 50:\n\n");

    /*Observe que o c�digo poderia ter sido escrito de forma mais resumida com apenas uma fun��o "While" mas decidi
    separar em grupos de 10 n�meros para que o usu�rio tenha uma melhor visualiza��o dos 50 n�meros ao rodar o algoritmo.*/

    while (cont<=10)
        {
        printf("%i  ", cont);
        cont++;
        }
    printf("\n");

    while (cont<=20 && cont>10)
        {
        printf("%i ", cont);
        cont++;
        }
    printf("\n");

    while (cont<=30 && cont>20)
        {
        printf("%i ", cont);
        cont++;
        }
    printf("\n");

    while (cont<=40 && cont>30)
        {
        printf("%i ", cont);
        cont++;
        }
    printf("\n");

    while (cont<=50 && cont>40)
        {
        printf("%i ", cont);
        cont++;
        }
    printf("\n");

return(777);

}

