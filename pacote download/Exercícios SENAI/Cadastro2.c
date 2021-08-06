#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 5 // Constante definida para um total m�ximo de 5 cadastros de clientes.
#define PRODUCTS 5//Constante para o cadastro de produtos.

// Programa de cadastro de clientes para loja de inform�tica - TECH IT.

//Declara��es da �rea de Clientes
char nome [SIZE][50];
char email [SIZE][50];
int cpf[SIZE];
int tel[SIZE];
int op;

//Declara��es da �rea de Produtos
char nomeproduto [PRODUCTS][50];
int idProd[PRODUCTS];
float preco[PRODUCTS];
int estoque[PRODUCTS];


void cadastro(); //Fun��o para cadastro de clientes
void listaClientes();//Fun��o para listar clientes registrados
void cadastroProd();//Fun��o para cadastrar produtos
void listaProdutos();//Lista de Produtos
void quemSomos();//Informa��es sobre a empresa



int main()//TELA INICIAL - MAIN
{
    setlocale(LC_ALL, "Portuguese");
    do{
        system("cls");
        system("color 1F");//Cor azul com letras brancas.
        printf("**********************************************************************************\n");
        printf("*********************** CHING LING COMPUTER STORE ********************************\n");
        printf("**********************************************************************************\n");
        printf("***********************      P�GINA INICIAL      *********************************\n");
        printf("**********************************************************************************\n");
        printf("**********************************************************************************\n");
        printf("|   CADASTRAR CLIENTES | CLIENTES | CADASTRAR PRODUTOS | PRODUTOS | QUEM SOMOS   |\n");
        printf("**********************************************************************************\n");

        //A partir deste momento � feita escolha de qual p�gina ir de acordo com as op��es abaixo.
        printf("\n\n------------------ MENU ------------------\n");
        printf("\nDigite 1 para Cadastrar Clientes");
        printf("\nDigite 2 para Listar Clientes Cadastrados");
        printf("\nDigite 3 para Cadastrar Produtos");
        printf("\nDigite 4 para Listar Produtos Cadastrados");
        printf("\nDigite 5 para Descobrir Quem Somos");
        printf("\nDigite 6 para Sair");
        printf("\n\nDigite sua Op��o: ");

        scanf("%i",&op);
        switch(op)
            {
                case 1:
                    cadastro();//P�gina do cadastro
                    break;

                case 2:
                    listaClientes();//P�gina da lista de Clientes.
                    break;

                case 3:
                    cadastroProd();//P�gina do Cadastro de Produtos.
                    break;

                case 4:
                    listaProdutos();//P�gina da lista de Produtos.
                    break;

                case 5:
                    quemSomos();//P�gina das Informa��es da Empresa.
                    break;

                case 6:
                    printf("\nHasta La Vista, Baby!\n");//Mensagem po�tica, caso o usu�rio decida sair do sistema.
                    system("exit");//Op��o de sair do sistema
                    break;

                default:
                    printf("Op��o Inv�lida! Aperte ENTER para retornar ao MENU.");
                    getchar();//Getchar segura o texto na tela por mais tempo.
                    getchar();
                    break;

            }
        }while(op!=6);



}//FIM do MAIN

void cadastroProd()//Fun��o para controlar cadastro de produtos.
{
    setlocale(LC_ALL, "Portuguese");

    system("cls");
    system("color 4F"); //Escolha da Cor vermelha para tela.
    printf("\n");
    printf("**********************************************************************************\n");
    printf("                                                     \n");
    printf("                   ####### CADASTRO DE PRODUTOS #######\n");
    printf("                                                      \n");
    printf("**********************************************************************************\n");
    printf("|       PRODUTO       |   C�DIGO    |    PRE�O    |     QUANTIDADE EM ESTOQUE    |\n");
    printf("**********************************************************************************\n");

    static int linhaProd;
    do{
        printf("\nDigite o Nome do Produto: ");
        scanf("%s", &nomeproduto[linhaProd]);
        printf("\nDigite o C�digo do Produto: ");
        scanf("%i", &idProd[linhaProd]);
        printf("\nDigite o Pre�o: ");
        scanf("%f", &preco[linhaProd]);
        printf("\nInforme a Quantidade em Estoque: ");
        scanf("%i", &estoque[linhaProd]);
        printf("\n\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%i", &op);
        linhaProd++; // Informa��es digitadas s�o armazenadas.
      }
    while(op==1);

}//FIM da fun��o de Cadastro de Produtos

void listaProdutos()//Fun��o para listar os produtos
{
    int p;

    setlocale(LC_ALL, "Portuguese");
    system("cls");
    system("color 8F");
    printf("\n");
    printf("**********************************************************************************\n");
    printf("                                                     \n");
    printf("                   ####### PRODUTOS CADASTRADOS #######\n");
    printf("                                                      \n");
    printf("**********************************************************************************\n");
    printf("|       PRODUTO       |   C�DIGO    |    PRE�O    |     QUANTIDADE EM ESTOQUE    |\n");
    printf("**********************************************************************************\n");



    for(p=0;p<PRODUCTS;p++){
        if (preco[p]>0 || idProd[p]>0){
            printf("\nProduto: %s\nC�digo: %i\nPre�o: %.2f\nEstoque: %i\n", nomeproduto[p], idProd[p], preco[p], estoque[p]);
            }
            else{break;}}
    printf("\n\nPressione ENTER para retornar ao MENU inicial.");
    getchar();//Getchar segura o texto na tela por mais tempo.
    getchar();
}//FIM da fun�ao que lista os Produtos Cadastrados.

void quemSomos()//Fun��o para listar informa��es da loja
{


    setlocale(LC_ALL, "Portuguese");

    system("cls");
    system("color 7C");
    printf("\n");
    printf("**********************************************************************************\n");
    printf("*********************** CHING LING COMPUTER STORE ********************************\n");
    printf("**********************************************************************************\n");
    printf("*************************      QUEM SOMOS     ************************************\n");
    printf("**********************************************************************************\n");


    printf("\nMiss�o: Atrapalhar a vida dos clientes de outros pa�ses com p�ssimos produtos e servi�os.\n");
    printf("\nVis�o: Acreditamos na vit�ria do Partido Comunista Chin�s, por isso vendemos produtos defeituosos a rodo.\n");
    printf("\nValores: Liberte, Egalite e Fraternite para os Chineses(APENAS).\n");
    printf("\nContatos: Telefone Xi Jin Ping.\n");
    printf("\nEndere�o: Sede Do Partido Comunista Chin�s - Pequim - CHINA.\n");

    printf("\n\nPressione ENTER para retornar ao MENU inicial.");
    getchar();
    getchar();

}

void listaClientes()//Fun��o que lista todos os clientes cadastrados.
{
    int i;

    setlocale(LC_ALL, "Portuguese");
    system("cls");
    system("color 1F");
    printf("\n");
    printf("**********************************************************************************\n");
    printf("                                                     \n");
    printf("                   ####### CLIENTES CADASTRADOS #######\n");
    printf("                                                      \n");
    printf("**********************************************************************************\n");
    printf("|          NOME          |       CPF         |     E-MAIL   |      TELEFONE      |\n");
    printf("**********************************************************************************\n");



    for(i=0;i<SIZE;i++){
        if (cpf[i]>0 || tel[i]>0){
            printf("\nNome: %s\nCPF: %i\nE-mail: %s\nTelefone: %i\n", nome[i], cpf[i], email[i], tel[i]);
            }
            else{break;}}
    printf("\nPressione ENTER para retornar ao MENU inicial.");
    getchar();//Getchar segura o texto na tela por mais tempo.
    getchar();

}//FIM da fun�ao que lista os Clientes Cadastrados.

void cadastro()//Fun��o de Cadastro de Clientes
{
    setlocale(LC_ALL, "Portuguese");


    system("cls");
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
        printf("\n\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%i", &op);
        linha++; // Informa��es digitadas s�o armazenadas.
      }
    while(op==1);

}//FIM da fun��o de Cadastro de Clientes
