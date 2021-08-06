#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Ler 50 números fornecidos pelo usuário e exibir a média.

int main()
{
    float num,media,soma;
    int cont = 1;

    setlocale(LC_ALL,"Portuguese");

    printf("Calcule a média de 50 números");
    while (cont<=50)
        {
        printf("\nDigite o %iº numero:",cont);
        scanf("%f",&num);
        soma = soma + num;
        cont++;
        }

    media = soma/50;

    printf("\nA média é: %.2f\n",media);

    return(21);


}
