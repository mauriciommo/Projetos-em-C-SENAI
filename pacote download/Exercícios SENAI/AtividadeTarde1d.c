#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Ler um valor inteiro(entre 1 e 20) e escrever a tabuada de 1 a 5 do valor digitado.

int main()
{

    int num;
    int cont = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero inteiro entre 1 e 20: ");
    scanf("%i", &num);
    //Primeiro � feito o scan do n�mero para saber se atende aos crit�rios definidos.
    if (num>20 || num<1){
        printf("\nATEN��O: o n�mero escolhido precisa ser inteiro e estar entre 1 e 20.\n");}
        //caso o n�mero esteja dentro dos crit�rios � executada a tabuada at� 5 utilizando o contador vezes o n�mero digitado.
        else{
            for (cont = 0; cont <= 5; cont++)
            {printf("%i x %i = %i\n",num, cont, num*cont);}
            }

return(21);



}
