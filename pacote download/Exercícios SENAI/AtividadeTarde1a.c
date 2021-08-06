#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Usuário digita um número e obtem como resultado o dobro e o triplo.

int main()
{
    float num;
    float dobro;
    float triplo;

    setlocale(LC_ALL, "Portuguese");
    printf("Olá, digite um número: ");
    scanf("%f", &num);
    dobro = num * 2;
    triplo = num * 3;
    printf("\nO dobro é: %.2f", dobro);
    printf("\nO triplo é: %.2f\n", triplo);


    return(777);
}
