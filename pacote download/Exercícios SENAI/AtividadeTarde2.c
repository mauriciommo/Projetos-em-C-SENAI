#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Programa que calcula os 20 primeiros termos da s�rie de Fibonacci.

int main()
{
    int cont = 1;
    int ant = 0;
    int atual = 1;
    int prox = 1;
    //Apresenta��o e print dos 2 primeiros n�meros da sequ�ncia.

    setlocale(LC_ALL,"Portuguese");
    printf("Abaixo a sequ�ncia dos primeiros vinte n�meros de Fibonacci:\n");
    printf("\n%i %i", ant, atual);
    //Print dos 18 termos que restaram.
            while (cont <= 18)
            {
            prox = atual + ant;
            printf(" %i", prox);
            ant = atual;
            atual = prox;
            cont++;
            }
    printf("\n");
return(21);
}
