#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Usu�rio digita um n�mero e obtem como resultado o dobro e o triplo.

int main()
{
    float num;
    float dobro;
    float triplo;

    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, digite um n�mero: ");
    scanf("%f", &num);
    dobro = num * 2;
    triplo = num * 3;
    printf("\nO dobro �: %.2f", dobro);
    printf("\nO triplo �: %.2f\n", triplo);


    return(777);
}
