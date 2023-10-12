#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

// -------------------------------------------------- Cores
#define VERDE "\033[0;32m"
#define AMARELO "\033[0;33m"
#define VERMELHO "\033[0;31m"
#define RESET "\033[0m"
#define AZULCL "\x1B[36m"
#define AZULESC "\x1B[34m"

void produto();
void estoque();
void compra();
void retirada();
void tutorial();
void arquivo();
void header();

void main()
{
    setlocale(LC_ALL, "");

    //TELA CHEIA
    keybd_event ( VK_MENU, 0x36, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );

    system("cls");//limpa qualquer definição anterior

    header();//chama o cabeçalho
    gotoxy(67, 6);// coloca o B na coluna 67 e linha 6
    printf("Bem-vindo(a)!");
    gotoxy(51, 7);// coloca o E na coluna 51 e linha 7
    printf("Escolha uma das opções abaixo para prosseguir:\n\n");

    int opcao;// variavel que vai permitir encaminha para outros menus

    arquivo();

    do
    {
        printf("1 - Menu Produto\n");
        printf("2 - Menu Compra\n");
        printf("3 - Menu Estoque\n");
        printf("4 - Menu Retirar Produto\n");
        printf("5 - Menu Tutorial\n");
        printf("0 - Encerrar o programa\n\n");
        printf("Digite a opção: ");
        scanf(" %d", &opcao);
        system("cls");
        header();
        gotoxy(67, 6);
        printf("Bem-vindo(a)!");
        gotoxy(51, 7);
        printf("Escolha uma das opções abaixo para prosseguir:\n\n");
    } while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 0 );

    if(opcao == 1)//encaminha para produtos
    {
        produto();
    }
    if(opcao == 2)//encaminha para estoque
    {
        estoque();
    }
    if(opcao == 3)//encaminha para compra
    {
        compra();
    }
    if(opcao == 4)//encaminha para retirada
    {
        retirada();
    }
    if(opcao == 5)//encaminha para retirada
    {
        tutorial();
    }
    if(opcao == 0)//encerra o programa
    {
        system("cls");
        header();
        gotoxy(66, 7);
        printf(VERMELHO"Encerrando..."RESET);
        return 0;
    }
}
void retirada()
{
    system("cls");
    header();

    int codProduto, motivoRetirada, unidRetirada;
    int opcao;

    gotoxy(70, 6);
    printf("Menu Retirar Produto");
    gotoxy(51, 7);
    printf("Escolha uma das opções abaixo para prosseguir:\n");

    do
    {
        printf("1 - Retirar Produto\n");
        printf("2 - Verificar Retirada\n");
        printf("0 - Voltar ao Menu\n");
        printf("Digite a opção: ");
        scanf(" %d", &opcao);
        system("cls");
        header();
        gotoxy(68, 6);
        printf("Menu Retirar Produtos\n");
        gotoxy(51, 7);
        printf("Escolha uma das opções abaixo para prosseguir:\n");
    }while(opcao != 1 && opcao != 2 && opcao != 0 );

    if (opcao == 1)// vai para retirada
    {
        system("cls");
        header();

        gotoxy(51, 7);
        printf("Retirada de Produtos\n\n");
        printf("_________________________________\n");
        printf("|  Códigos     |     Motivo     |\n");
        printf("|     1        |    Consumo     |\n");
        printf("|     2        |   Vencimento   |\n");
        printf("|     3        |     Avaria     |\n");
        printf("|     4        |   Perda/Roubo  |\n");
        printf("_________________________________\n");


        printf("Qual o código do produto que deseja retirar: ");
        scanf(" %d", &codProduto);

        // verificação se o produto existe

        printf("Quantas unidades deseja retirar: ");
        scanf(" %d", &unidRetirada);

        //verificação se pode retirar aquela quantidade

        printf("Qual o código do motivo da retirada: ");
        scanf(" %d", &motivoRetirada);

        //verificação se o motivo da retirada existe


        return;
    }
    if(opcao == 2)//mostra as retiradas ja feitas
    {
        system("cls");
        header();
    }
    if (opcao == 0)// volta para o menu principal
    {
        main();
    }
}
void tutorial()
{
    system("cls");
    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial do OptiStock\n\n");

    gotoxy(62, 7);
    printf("O programa possui 5 menus:\n\n");
    printf("1 - Menu Produto\n");
    printf("2 - Menu Compra\n");
    printf("3 - Menu Estoque\n");
    printf("4 - Menu Retirar Produto\n");
    printf("5 - Tutorial\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(65, 7);
    printf("1 - Menu Produto\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(66, 7);
    printf("2 - Menu Compra\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(65, 7);
    printf("3 - Menu Estoque\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(60, 7);
    printf("4 - Menu Retirar o Produto\n\n");
    printf("Este menu serve para lan ar altera  es do estoque.\n");
    printf("Ao selecionar o Menu 4 - Retirar produtos, voc  dever \n");
    printf("inserir o c digo do produto que deseja realizar retirada.\n\n");

    printf("O programa ir  exibir a quantidade atual do produto,\n");
    printf("e voc  dever  inserir quantas unidades deseja retirar e\n");
    printf("o c digo do motivo que vai estar listado.\n\n");

    printf("Caso esqueça o código do produto durante a retirada, \n");
    printf("digite 0 para voltar para o menu principal\n");
    printf("e acesse o Menu 1 - Produtos, para verificar.\n\n");

    printf("Ao final da retirada, caso queira verificar se os dados\n");
    printf("estão corretos, utilize o Menu 3 - Estoque!\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(65, 7);
    printf("5 - Menu Tutorial\n\n");

    printf("Caso queira visualizar o tutorial novamente, basta acessar\n");
    printf("5 - Tutorial\n\n");

    system("pause");
    system("cls");
    main();
    return;
}
void header()
{
    //design(200, 170);

    gotoxy(0, 0);
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n");
    gotoxy(69, 2);
    printf("OptiStock\n");
    gotoxy(0, 4);
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n");

    return;
}
/*void design(int height, int width)
{
    int i, j;

    height /= 4;
    width /= 2;

    for (i <= 0; i < height; i++)
    {
        for (j <= 0; j < width; j++)
        {
            if (i == height - 1)
            {
                printf("-");
            }
            else if (j == width - 1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/
void gotoxy(int x, int y)
{
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
