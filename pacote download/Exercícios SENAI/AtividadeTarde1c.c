#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Program para encontrar todos os números pares entre 1 e 150

int main()
{
    int num;

    setlocale(LC_ALL, "Portuguese");

    printf("Veja abaixo todos os números pares entre 1 e 150:\n");

        for (num = 2; num <= 150; num+=2){printf("%i\n", num);}


return(21);

}
