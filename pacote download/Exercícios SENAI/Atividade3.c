#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Calcular o valor de S = 1/1+3/2+5/3...99/50

int main()
{
    float a = 1;
    float b = 1;
    float fraction = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Olá, descubra o valor de S = 1/1 + 3/2 + 5/3 + 7/4 +...+ 99/50\n");

    while (b<=50)
        {
            printf("\n%.f/%.f = %.2f", a, b, a/b);
            fraction = fraction + (a/b);
            a=a+2;
            b++;
        }

    printf("\n\nO resultado final é a soma de todos os valores: ");
    printf("%.2f\n", fraction);


return(21);

}
