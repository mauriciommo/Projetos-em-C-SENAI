#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa que l� 12 n�meros e imprime quantos s�o pares e quantos s�o �mpares.

int main()
{
    int num = 0;
    int par = 0;
    int impar = 0;
    int cont = 1;

    setlocale(LC_ALL,"Portuguese");

    printf("Ol�, digite 12 n�meros e descubra quantos s�o pares e �mpares.\n\n");

    //Entrada dos 12 n�meros
    while (cont<=12)
        {
        printf("Digite o %i� n�mero: ", cont);
        scanf("%i", &num);
        //Condi��es para os pares e �mpares e armazenamento.
        if (num > 0)
            {
            if (num % 2 == 0)
                par++;
            else
                impar++;
            }
        cont++;
        }
    //Impress�o das quantidades.
    printf("\nA quantidade de n�meros pares �: %i\t A quantidade de n�meros �mpares �: %i\n", par, impar);

return(21);




}








