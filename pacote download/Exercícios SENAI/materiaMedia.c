#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

double n1,n2,media;
char materia [50];


setlocale(LC_ALL, "Portuguese");
printf("Digite o nome da mat�ria: ");
gets(materia);

printf("Digite a 1� Nota: ");
scanf("%lf",&n1);

printf("Digite a 2� Nota: ");
scanf("%lf",&n2);

media = (n1+n2)/2;

printf("O nome da mat�ria �: %s",materia);
printf("\nA m�dia �: %.2lf",media);

return(21);

}
