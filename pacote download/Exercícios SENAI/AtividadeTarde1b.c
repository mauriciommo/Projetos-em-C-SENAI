#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Programa que exibe os números de 1 a 50 na tela.

int main()
{
    int cont = 1;

    setlocale(LC_ALL, "Portuguese");
    printf("Olá, veja abaixo os números de 1 a 50:\n\n");

    /*Observe que o código poderia ter sido escrito de forma mais resumida com apenas uma função "While" mas decidi
    separar em grupos de 10 números para que o usuário tenha uma melhor visualização dos 50 números ao rodar o algoritmo.*/

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

