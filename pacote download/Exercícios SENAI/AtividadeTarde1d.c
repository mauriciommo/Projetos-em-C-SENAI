#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Ler um valor inteiro(entre 1 e 20) e escrever a tabuada de 1 a 5 do valor digitado.

int main()
{

    int num;
    int cont = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número inteiro entre 1 e 20: ");
    scanf("%i", &num);
    //Primeiro é feito o scan do número para saber se atende aos critérios definidos.
    if (num>20 || num<1){
        printf("\nATENÇÂO: o número escolhido precisa ser inteiro e estar entre 1 e 20.\n");}
        //caso o número esteja dentro dos critérios é executada a tabuada até 5 utilizando o contador vezes o número digitado.
        else{
            for (cont = 0; cont <= 5; cont++)
            {printf("%i x %i = %i\n",num, cont, num*cont);}
            }

return(21);



}
