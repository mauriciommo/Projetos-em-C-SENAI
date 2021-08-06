#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Programa que lê 12 números e imprime quantos são pares e quantos são ímpares.

int main()
{
    int num = 0;
    int par = 0;
    int impar = 0;
    int cont = 1;

    setlocale(LC_ALL,"Portuguese");

    printf("Olá, digite 12 números e descubra quantos são pares e ímpares.\n\n");

    //Entrada dos 12 números
    while (cont<=12)
        {
        printf("Digite o %iº número: ", cont);
        scanf("%i", &num);
        //Condições para os pares e ímpares e armazenamento.
        if (num > 0)
            {
            if (num % 2 == 0)
                par++;
            else
                impar++;
            }
        cont++;
        }
    //Impressão das quantidades.
    printf("\nA quantidade de números pares é: %i\t A quantidade de números ímpares é: %i\n", par, impar);

return(21);




}








