#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

void produto();
void procurarProd();
void editProd();
void estoque();
void compra();
void movimentacao();
void retirada();
void historicoRetirada();
void tutorial();
void header();

void main(){
        setlocale(LC_ALL,"");
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
                    compra();
                    break;
                case 3:
                    estoque();
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

    int opcao = 0, codProduto;
    char nome;
    float valorCompra, valorVenda;

    printf("Menu produto\n");
    printf("1 - Procurar produto\n");
    printf("2 - Editar produto\n");
    printf("3 - Criar produto\n");
    printf("4 - Voltar menu principal\n");
    printf("5 - Fechar programa\n");
    printf("Escolha um opção: ");
    scanf(" %d", &opcao);

    switch(opcao){
           case 1 : procurarProd();
           break;
           case 2 : editProd();
           break;

           }

    system("cls");
/*
    header();

    do{
        switch (opcao) {
            case 1:
                printf("Procurar produto\n");
                printf("Entre com o código do produto: ");
                scanf(" %d", &codProduto);

                system("cls");

                if (codProduto == 1) {
                    do
                    {
                        header();
                        printf("Código do produto: \n");
                        printf("Nome: \n");
                        printf("Valor da compra: \n");
                        printf("Valor da venda: \n");
                        printf("\n1 - Voltar ao menu principal\n");
                        printf("2 - Voltar ao menu produto\n");
                        printf("3 - Editar este produto\n");
                        printf("4 - Fechar programa");
                        scanf(" %d", &opcao);

                        switch (opcao)
                        {
                            case 1:
                                //Voltar pra função main
                                break;
                            case 2:
                                //Voltar pra função menu produto
                                break;
                            case 3:
                                //Voltar pra função editar produto
                                break;
                            case 4:
                                return 0;

                            default:
                                printf("\nOpção inválida");
                        }

                        system("cls");

                    } while (opcao != 6);

                } else {
                    do{
                        header();
                        printf("Produto não encontrado\n");
                        printf("\n1 - Para procurar novamento um produto\n");
                        printf("2 - Para voltar para o menu produto\n");
                        printf("3 - Para ir para o menu principal\n");
                        printf("4 - Encerrar o programa\n");
                        printf("Escolha uma opção: ");
                        scanf(" %d", &opcao);

                        switch (opcao)
                        {
                            case 1:
                                //Voltar para a função procurar produto
                                break;

                            case 2:
                                //Voltar para o menu produto
                                break;

                            case 3:
                                //Voltar para o menu principal
                                break;

                            case 4:
                                return 0;

                            default:
                                printf("\nOpção inválida");
                                break;
                        }

                        system("cls");

                    } while (opcao != 4);

                }
                break;

            case 2:

                printf("Editar produto\n");
                printf("Entre com o código do produto: ");
                scanf(" %d", &codProduto);

                system("cls");

                if (codProduto == 1)
                {
                    header();
                    printf("Menu editar produto\n");
                    printf("\nCódigo do produto: \n");
                    scanf(" %d", &codProduto);

                    printf("Nome: \n");
                    scanf(" %c", &nome);

                    printf("Valor de compra: \n");
                    scanf(" %f", &valorCompra);

                    printf("Valor de venda: \n");
                    scanf(" %f", &valorVenda);

                    system("cls");
                    header();

                    printf("Menu editar produto\n");
                    printf("Os novos valores são\n");
                    printf("\nCódigo do produto: ");
                    scanf(" %d", &codProduto);

                    printf("Nome: \n");
                    scanf(" %c", &nome);

                    printf("Valor de compra: \n");
                    scanf(" %f", &valorCompra);

                    printf("Valor de venda: \n");
                    scanf(" %f", &valorVenda);

                    system("cls");
                    header();

                    printf("Salvo com sucesso!\n");
                    printf("Presione enter");

                } else{
                    do{
                        system("cls");
                        header();

                        printf("Produto não encontrado\n");
                        printf("1 - Para procurar novamente um produto\n");
                        printf("2 - Para voltar para o menu produto\n");
                        printf("3 - Para ir para o menu principal\n");
                        printf("4 - Encerrar programa\n");
                        printf("Escolha uma opção: ");
                        scanf(" %d", &opcao);

                        switch (opcao)
                        {
                            case 1:
                                //Voltar para a função editar produto
                                break;

                            case 2:
                                //Voltar para a função menu produto
                                break;

                            case 3:
                                //Voltar para o menu principal
                                break;

                            case 4:
                                return 0;
                                break;

                            default:
                                printf("\nOpção inválida!")
                                break;
                        }
                    } while(opcao != 6);
                }

            case 3:
                char descricaoProduto[];
                int opcaoProdutoCriado;

                system("cls");
                header();

                printf("Criar produto\n")
                printf("\nEntre com a descrição do produto: ");
                scanf(" %c", &descricaoProduto);

                printf("\nValor de compra: ");
                scanf(" %f", &valorCompra);

                printf("\nValor de venda: ");
                scanf(" %f", &valorVenda);

                do
                {
                    printf("Informações do produto criado\n");
                    printf("\nCódigo do produto: %d", codProduto);
                    printf("\nValor de compra: %.2f", valorCompra);
                    printf("\nValor de venda: %.2f", valorVenda);
                    printf("\nDescrição: %c", descricaoProduto);
                    printf("\n");

                    printf("\nEscolha uma opção:\n");
                    printf("1 - Para salvar o produto\n");
                    printf("2 - Para alterar dados deste produto\n");
                    printf("3 - Voltar para o menu principal sem salvar\n");
                    printf("4 - Voltar para o menu produto sem salvar\n");
                    printf("5 - Encerrar o programa");
                    scanf(" %d", &opcaoProdutoCriado);

                    system("cls");
                    header();

                    switch (opcaoProdutoCriado)
                    {
                        case 1:
                            //Salva
                            break;

                        case 2:
                            //???
                            break;

                        case 3:
                            //Voltar para o menu principal sem salvar
                            break;

                        case 4:
                            //Voltar para o menu produto sem salvar
                            break;

                        case 5:
                            return 0;

                        default:
                            printf("\nOpção inválida!");
                            break;
                    }

                } while (opcao != 6);

            case 4:
                //Não achei o 9 no fluxograma
                break;

            case 5:
                return 0:
                break;

            default:
                printf("\nOpção inválida!");
                break;


        }
    } while(opcao != 6);
*/
    return 0;
}

void procurarProd(){
}

void editProd(){
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
    printf ("Movimentação de Estoque!\n");
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
    header();


    int codProduto, motivoRetirada, unidRetirada;

    printf ("Retirada de Produtos!\n\n");
    printf ("Códigos            Motivo\n");
    printf ("   1               Consumo\n");
    printf ("   2               Vencimento\n");
    printf ("   3               Avaria\n");
    printf ("   4               Perda/Roubo\n\n");

    printf ("Qual o código do produto que deseja retirar? ");
    scanf (" %d", &codProduto);

    printf ("Quantas unidades deseja retirar? ");
    scanf (" %d", &unidRetirada);

    printf ("Qual o código do motivo da retirada?");
    scanf (" %d", &motivoRetirada);

    return;

}
void historicoRetirada(){
    header();

    return;
}
void tutorial(){

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
    printf("Este menu serve para lançar alterações do estoque.\n");
    printf("Ao selecionar o Menu 4 - Retirar produtos, você deverá\n");
    printf("inserir o código do produto que deseja realizar retirada.\n\n");

    printf("O programa irá exibir a quantidade atual do produto,\n");
    printf("e você deverá inserir quantas unidades deseja retirar e\n");
    printf("o código do motivo que vai estar listado.\n\n");

    printf("Caso esqueça o código do produto durante a retirada, \n");
    printf("digite 0 para voltar para o menu principal\n");
    printf("e acesse o Menu 1 - Produtos, para verificar.\n\n");

    printf("Ao final da retirada, caso queira verificar se os dados\n");
    printf("estão corretos, utilize o Menu 3 - Estoque!\n\n");

    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("5 - Tutorial\n\n");

    printf("Caso queira visualizar o tutorial novamente, basta acessar\n");
    printf("5 - Tutorial\n\n");

    system("pause");
    system("cls");
    main();
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
