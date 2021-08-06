// Programa de cadastro de clientes para loja de informática - TECH IT.

#include<stdio.h> //Bibliotecas
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 5 // Constante definida para facilitar trabalho com a Matriz - total máximo definido de 5 cadastros.



char nome [SIZE][50]; //Matriz para cadastro de 200 nomes - 200 linhas e 50 colunas.
char email [SIZE][50];
int cpf[SIZE]; //CPF será utilizado como ID de cada cliente.
int tel[SIZE];
int op;
void cadastro(); //Função para cadastro de clientes
void listaClientes();//Função para listar clientes registrados


int main()//TELA INICIAL
{
    setlocale(LC_ALL, "Portuguese");
    printf("**********************************************************************************\n");
    printf("*********************** CHING LING COMPUTER STORE ********************************\n");
    printf("**********************************************************************************\n");
    printf("**********************************************************************************\n");
    printf("| CADASTRAR CLIENTES |      PRODUTOS       |     QUEM SOMOS      |    ESTOQUE    |\n");
    printf("**********************************************************************************\n");

    cadastro();
    listaClientes();
}

void listaClientes()//Função lista todos os clientes cadastrados.
{
    int i;

    setlocale(LC_ALL, "Portuguese");
    printf("\n");
    printf("\n********************************************************************************\n");
    printf("                                                     \n");
    printf("                   ####### CLIENTES CADASTRADOS #######\n");
    printf("                                                      \n");
    printf("**********************************************************************************\n");
    printf("|          NOME          |       CPF         |     E-MAIL   |      TELEFONE      |\n");
    printf("**********************************************************************************\n");



    for(i=0;i<SIZE;i++){
        if (cpf>0 && tel>0 && nome>0 && email>0)
            {
            printf("\n|      Nome: %s        |      CPF: %i      |   E-mail: %s  |    Telefone: %i   |\n", nome[i], cpf[i], email[i], tel[i]);
            }
            else{break;}

}


void cadastro()//Função de Cadastro de Clientes
{
    setlocale(LC_ALL, "Portuguese");
    system("color 2F"); //Escolha da Cor verde para tela de cadastros

    printf("\n");
    printf("**********************************************************************************\n");
    printf("                                                     \n");
    printf("                   ####### CADASTRO DE CLIENTES #######\n");
    printf("                                                      \n");
    printf("**********************************************************************************\n");
    printf("|          NOME          |     CPF        |     E-MAIL      |      TELEFONE      |\n");
    printf("**********************************************************************************\n");

    static int linha;
    do{
        printf("\nDigite o Nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o CPF: ");
        scanf("%i", &cpf[linha]);
        printf("\nDigite o E-mail: ");
        scanf("%s", &email[linha]);
        printf("\nDigite o Telefone: ");
        scanf("%i", &tel[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair: \n\n");
        scanf("%i", &op);
        linha++; // Informações digitadas são armazenadas.
      }
    while(op==1);

}//FIM da função de Cadastro de Clientes





