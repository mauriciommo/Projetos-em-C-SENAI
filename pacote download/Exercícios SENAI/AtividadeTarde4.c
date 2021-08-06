#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Fazer um programa que leia números pelo teclado e mostre o maior número lido. Encerrar quando for lido o número 0.

int main()
{
    int num = 0;
    int maior = 0;
    int menor = 0;
    int cont = 0;


        setlocale(LC_ALL,"Portuguese");

        printf("Digite valores e veja qual é o maior. Se você digitar Zero o programa será encerrado.");

            do
            {
            printf("\nDigite um número: ");
            scanf("%i", &num);
                if (num == 0){printf("Você digitou zero!");break;}//se número digitado for igual a zero, sistema vai para break.
                    else if (cont == 0)
                        {
                        maior = num;
                        menor = num;
                        cont++;
                        }
                        else if (num>maior){maior = num;}
                        else if (num<menor){menor = num;}

            }
        while(1);//1 para verdadeiro

        printf("\n\nMaior número digitado: %i  \nMenor número digitado: %i", maior, menor);

return(21);
}
