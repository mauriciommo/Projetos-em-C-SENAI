#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Fazer um programa que leia n�meros pelo teclado e mostre o maior n�mero lido. Encerrar quando for lido o n�mero 0.

int main()
{
    int num = 0;
    int maior = 0;
    int menor = 0;
    int cont = 0;


        setlocale(LC_ALL,"Portuguese");

        printf("Digite valores e veja qual � o maior. Se voc� digitar Zero o programa ser� encerrado.");

            do
            {
            printf("\nDigite um n�mero: ");
            scanf("%i", &num);
                if (num == 0){printf("Voc� digitou zero!");break;}//se n�mero digitado for igual a zero, sistema vai para break.
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

        printf("\n\nMaior n�mero digitado: %i  \nMenor n�mero digitado: %i", maior, menor);

return(21);
}
