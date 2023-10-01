#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

void produto(nome_pasta);
void estoque(nome_pasta);
void compra(nome_pasta);
void movimentacao(nome_pasta);
void retirada();
void historicoRetirada();
void tutorial();
void header();

void main(){
        setlocale(LC_ALL, "");
        header();

        int codigo;

        printf ("Bem-vindo(a)! Escolha uma das opções abaixo para prosseguir:\n");
        printf ("1 - Produtos\n");
        printf ("2 - Compras\n");
        printf ("3 - Estoque\n");
        printf ("4 - Retirar Produtos\n");
        printf ("5 - Tutorial\n");
        printf ("0 - Sair\n");
        printf("Codigo: ");
        scanf(" %d", &codigo);

          switch (codigo) {
                case 0:
                    system("cls");
                    break;
                case 1:
                    produto();
                    break;
                case 2:
                    estoque();
                    break;
                case 3:
                    compra();
                    break;
                case 4:
                    movimentacao();
                    break;
                case 5:
                    tutorial();
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;

        system("cls");
        return (codigo);
          }
    }

void produto(){
    header();
    return 0;
}

void compra(){
    header();
    return 0;
}

void estoque(){
    header();
    return 0;
}

void movimentacao(){
    header();

    int codigo;
    printf ("Retirada de Produtos!\n");
    printf ("Escolha uma das opções abaixo para prosseguir:\n");
    printf ("1 - Retirada\n");
    printf ("2 - Verificar Retirada\n");
    printf ("0 - Voltar ao Menu\n");
    printf("Codigo: ");
    scanf(" %d", &codigo);
    
    switch (codigo) {
                case 1:
                    retirada();
                    break;
                case 2:
                    historicoRetirada();
                    break;
                case 0:
                    main();
                    break;
    }
    return 0;
}
void retirada(){
}
void historicoRetirada(){
}
void tutorial(){
    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");

    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");

    printf("O programa possui 5 menus:\n");
    printf ("1 - Produtos\n");
    printf ("2 - Compras\n");
    printf ("3 - Estoque\n");
    printf ("4 - Retirar Produtos\n");
    printf ("5 - Tutorial\n");

    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("1 - Produtos!\n\n");


    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("2 - Compras!\n\n");


    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("3 - Estoque!\n\n");


    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("4 - Retirar o Produto\n\n");

    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("5 - Tutorial\n\n");

    printf("Caso queira visualizar o tutorial novamente, basta acessar\n");
    printf("6 - Tutorial\n\n");

    system("pause");
    system("cls");

return;
}

void header(){
    design(200, 170);

    gotoxy(1,1);
    printf("-----------------------------------------------------------------------------------\n");
    gotoxy(28,2);
    printf("OptiStock\n");
    gotoxy(1,3);
    printf("-----------------------------------------------------------------------------------\n");

    return;
}

void design(int height, int width) {

    int i, j;

    height /= 4;
    width /= 2;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == height - 1) {
                printf("-");
            } else if (j == width - 1) {
                    printf("|");
                } else {
                        printf(" ");
                    }
        }
        printf("\n");
    }
}

//Posiciona o eixo X e Y
void gotoxy(int x, int y) {
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
