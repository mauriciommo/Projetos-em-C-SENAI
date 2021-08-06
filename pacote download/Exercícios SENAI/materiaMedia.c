#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

double n1,n2,media;
char materia [50];


setlocale(LC_ALL, "Portuguese");
printf("Digite o nome da matéria: ");
gets(materia);

printf("Digite a 1ª Nota: ");
scanf("%lf",&n1);

printf("Digite a 2ª Nota: ");
scanf("%lf",&n2);

media = (n1+n2)/2;

printf("O nome da matéria é: %s",materia);
printf("\nA média é: %.2lf",media);

return(21);

}
