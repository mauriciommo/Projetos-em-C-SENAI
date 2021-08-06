#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 5 // Constante definida para um total máximo de 5 cadastros de clientes.
#define PRODUCTS 5//Constante para o cadastro de produtos.

// Programa de cadastro de clientes para loja de informática - TECH IT.

//Declarações da área de Clientes
char nome [SIZE][50];
char email [SIZE][50];
int cpf[SIZE];
int tel[SIZE];
int op;

//Declarações da área de Produtos
char nomeproduto [PRODUCTS][50];
int idProd[PRODUCTS];
float preco[PRODUCTS];
int estoque[PRODUCTS];


void cadastro(); //Função para cadastro de clientes
void listaClientes();//Função para listar clientes registrados
void cadastroProd();//Função para cadastrar produtos
void listaProdutos();//Lista de Produtos
void quemSomos();//Informações sobre a empresa



int main()//TELA INICIAL - MAIN
{
    setlocale(LC_ALL, "Portuguese");
    do{
        system("cls");
        system("color 1F");//Cor azul com letras brancas.
        printf("**********************************************************************************\n");
        printf("*********************** CHING LING COMPUTER STORE ********************************\n");
        printf("**********************************************************************************\n");
        printf("***********************      PÁGINA INICIAL      *********************************\n");
        printf("**********************************************************************************\n");
        printf("**********************************************************************************\n");
        printf("|   CADASTRAR CLIENTES | CLIENTES | CADASTRAR PRODUTOS | PRODUTOS | QUEM SOMOS   |\n");
        printf("**********************************************************************************\n");

        //A partir deste momento é feita escolha de qual página ir de acordo com as opções abaixo.
        printf("\n\n------------------ MENU ------------------\n");
        printf("\nDigite 1 para Cadastrar Clientes");
        printf("\nDigite 2 para Listar Clientes Cadastrados");
        printf("\nDigite 3 para Cadastrar Produtos");
        printf("\nDigite 4 para Listar Produtos Cadastrados");
        printf("\nDigite 5 para Descobrir Quem Somos");
        printf("\nDigite 6 para Sair");
        printf("\n\nDigite sua Opção: ");

        scanf("%i",&op);
        switch(op)
            {
                case 1:
                    cadastro();//Página do cadastro
                    break;

                case 2:
                    listaClientes();//Página da lista de Clientes.
                    break;

                case 3:
                    cadastroProd();//Página do Cadastro de Produtos.
                    break;

                case 4:
                    listaProdutos();//Página da lista de Produtos.
                    break;

                case 5:
                    quemSomos();//Página das Informações da Empresa.
                    break;

                case 6:
                    printf("\nHasta La Vista, Baby!\n");//Mensagem poética, caso o usuário decida sair do sistema.
                    system("exit");//Opção de sair do sistema
                    break;

                default:
                    printf("Opção Inválida! Aperte ENTER para retornar ao MENU.");
                    getchar();//Getchar segura o texto na tela por mais tempo.
                    getchar();
                    break;

            }
        }while(op!=6);



}//FIM do MAIN

void cadastroProd()//Função para controlar cadastro de produtos.
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
    printf("|       PRODUTO       |   CÓDIGO    |    PREÇO    |     QUANTIDADE EM ESTOQUE    |\n");
    printf("**********************************************************************************\n");

    static int linhaProd;
    do{
        printf("\nDigite o Nome do Produto: ");
        scanf("%s", &nomeproduto[linhaProd]);
        printf("\nDigite o Código do Produto: ");
        scanf("%i", &idProd[linhaProd]);
        printf("\nDigite o Preço: ");
        scanf("%f", &preco[linhaProd]);
        printf("\nInforme a Quantidade em Estoque: ");
        scanf("%i", &estoque[linhaProd]);
        printf("\n\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%i", &op);
        linhaProd++; // Informações digitadas são armazenadas.
      }
    while(op==1);

}//FIM da função de Cadastro de Produtos

void listaProdutos()//Função para listar os produtos
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
    printf("|       PRODUTO       |   CÓDIGO    |    PREÇO    |     QUANTIDADE EM ESTOQUE    |\n");
    printf("**********************************************************************************\n");



    for(p=0;p<PRODUCTS;p++){
        if (preco[p]>0 || idProd[p]>0){
            printf("\nProduto: %s\nCódigo: %i\nPreço: %.2f\nEstoque: %i\n", nomeproduto[p], idProd[p], preco[p], estoque[p]);
            }
            else{break;}}
    printf("\n\nPressione ENTER para retornar ao MENU inicial.");
    getchar();//Getchar segura o texto na tela por mais tempo.
    getchar();
}//FIM da funçao que lista os Produtos Cadastrados.

void quemSomos()//Função para listar informações da loja
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


    printf("\nMissão: Atrapalhar a vida dos clientes de outros países com péssimos produtos e serviços.\n");
    printf("\nVisão: Acreditamos na vitória do Partido Comunista Chinês, por isso vendemos produtos defeituosos a rodo.\n");
    printf("\nValores: Liberte, Egalite e Fraternite para os Chineses(APENAS).\n");
    printf("\nContatos: Telefone Xi Jin Ping.\n");
    printf("\nEndereço: Sede Do Partido Comunista Chinês - Pequim - CHINA.\n");

    printf("\n\nPressione ENTER para retornar ao MENU inicial.");
    getchar();
    getchar();

}

void listaClientes()//Função que lista todos os clientes cadastrados.
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

}//FIM da funçao que lista os Clientes Cadastrados.

void cadastro()//Função de Cadastro de Clientes
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
        linha++; // Informações digitadas são armazenadas.
      }
    while(op==1);

}//FIM da função de Cadastro de Clientes
