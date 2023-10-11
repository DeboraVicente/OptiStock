#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

//---------------------Protótipos das funções---------------------------//
void produto(nome_pasta);
void procurarProd(nome_pasta);
void editProd(nome_pasta);
void estoque(nome_pasta);
void compra(nome_pasta);
void movimentacao(nome_pasta);
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
        
    int codProduto, unidades, verifica, opcao;
    float valorUnidade;
    char descricao[50], c;

    FILE *arquivo; //Cria um ponteiro para receber um arquivo 
    //Abre o arquivo e o "a" tem a função append coloca no final do arquivo
    arquivo = fopen("estoque.txt", "a"); 
    //Checa se o arquivo pode ser aberto ou existe
    if((arquivo=fopen("estoque.txt", "a")) == NULL)
    {
        printf("O arquivo não pode ser aberto");
        exit(1);
    }

    //Laço do - while menu de opções
    do{
        printf("\n 1 - Entrar com uma compra");
        printf("\n 2 - Verificar uma compra");
        printf("\n 3 - Voltar menu principal");
        printf("\n Escolha uma opcao: ");
        scanf("%d", &opcao);
        system("cls");
        //Toda vez que limpar a tela chamar a função header()
        header();
    //Repete o menu ate que seja digita 1,2 ou 3
    }while(opcao != 1 && opcao != 2 && opcao != 3);

    //Se opção 1 entra no menu compra
    if(opcao == 1)
    {
        //menu compra 
        do{
            printf("Menu compra\n\n");
            printf("Entre com o codigo do produto: ");
            scanf("%d",&codProduto);

            printf("Descricao do produto: ");
            //setbuf(stdin, NULL);
            scanf(" "); //usei este metodo para substituir o setbuf
            //Scanf com REGEX para receber 49 caracteres e final colocar o \n para evitar erros
            scanf("%49[^\n]", descricao);  
            printf("Quantas unidades: ");
            scanf("%d",&unidades);

            printf("Qual o valor por unidade: ");
            scanf("%f", &valorUnidade);

            printf("\n Codigo: %d",codProduto);
            printf("\n Descricao: %s",descricao);
            printf("\n Qtd.Unidades: %d",unidades);
            printf("\n Valor por unidade: %.2f",valorUnidade);

            printf("\n\n Confirma essas informacoes");
            printf("\n Digite 1 para Confirmar a compra");
            printf("\n Digite 0 para apagar os dados da compra");
            printf("\n Digite qualquer outra tecla para voltar ao menu principal: ");
            scanf("%d", &verifica);
            system("cls");
                
            if(verifica != 1 && verifica != 0)
            {
                main();
            }
        }
        while(verifica != 1);

        //Grava os dados no arquivo estoque
        printf("\n Gravando dados...\n");
        system("pause");

        //Função fprintf grava o texto no arquivo chamado de estoque.txt
        fprintf(arquivo,"\n");
        fprintf(arquivo,"\n Codigo: %d", codProduto);
        fprintf(arquivo,"\n Descricao: %s", descricao);
        fprintf(arquivo,"\n Qtd.Unidades: %d", unidades);
        fprintf(arquivo,"\n Valor por unidade: %.2f", valorUnidade);
        fclose(arquivo);  //Fecha o arquivo estoque.txt
        printf("\n Gravado com sucesso \n");
        system("PAUSE");
        printf("\n Digite 1 para entrar com mais uma compra");
        printf("\n Digite outra tecla para voltar ao menu principal: ");
        scanf("%d", &verifica);
        if(verifica != 1)
        {
            main(); //Vai para a função principal
        }
        compra(); //Vai para o início desta função
    }

    if(opcao == 2)
    {
        //Abre o arquivo estoque.txt no modo leitura 
        arquivo = fopen("estoque.txt", "r");
        do
        {
            //faz a leitura do caracter no arquivo apontado
            c = fgetc(arquivo);

            //exibe o caracter lido na tela
            printf("%c" , c);

        //enquanto a leitura seja diferente que o final do arquivo
        }while (c != EOF); // Le o arquivo ate o final
        fclose(arquivo); //Fecha o arquivo
        printf("\n");
        system("pause");
        compra(); //Vai para o início da função
    }

    if(opcao == 3)
    {
        main(); //Vai para o menu principal
    }
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
