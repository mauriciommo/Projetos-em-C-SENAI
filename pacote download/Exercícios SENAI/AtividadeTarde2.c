#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Programa que calcula os 20 primeiros termos da série de Fibonacci.

int main()
{
    int cont = 1;
    int ant = 0;
    int atual = 1;
    int prox = 1;
    //Apresentação e print dos 2 primeiros números da sequência.

    setlocale(LC_ALL,"Portuguese");
    printf("Abaixo a sequência dos primeiros vinte números de Fibonacci:\n");
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
