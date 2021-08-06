#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Some as idades de uma família
o pai tem 45 anos,
a mãe 40,
os 4 filhos tenham 20, 17, 13 e 9 anos*/

int main()
{

int pai = 45;
int mae = 40;
int f1 = 20;
int f2 = 17;
int f3 = 13;
int f4 = 9;
int soma;

    setlocale(LC_ALL,"Portuguese");
    printf("A idade do Pai é: 45\n");
    printf("A idade da mãe é: 40\n");
    printf("A idade do primeiro filho é: 20\n");
    printf("A idade do segundo filho é: 17\n");
    printf("A idade do primeiro filho é: 13\n");
    printf("A idade do primeiro filho é: 9\n");

    soma = pai+mae+f1+f2+f3+f4;
    printf("\nA soma da idade de todos é: %i\n",soma);


return(21);


}



