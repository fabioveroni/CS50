#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declara a variável altura como inteiro e faz um loop obrigando o imput entre 1 e 8 via função get_int
    int altura;
    do
    {
        altura = get_int("Digite a altura Desejada entre 1 e 8: ");
    }
    while (altura < 1 || altura > 8);

    //Imprime o numero de Hashes e linhas conforme o imput do usuário

    //Imprime 1 # para a escolha 1
    if (altura == 1)
    {
        printf("#\n");
    }
    //Imprime piramide de 2 # de altura para a escolha 2, pulando uma linha entre a altura definida
    else if (altura == 2)
    {
        printf(" #\n""##\n");
    }
    //Imprime piramide de 3 # de altura para a escolha 3, pulando uma linha entre a altura definida
    else if (altura == 3)
    {
        printf("  #\n"" ##\n""###\n");
    }
    //Imprime piramide de 4 # de altura para a escolha 4, pulando uma linha entre a altura definida
    else if (altura == 4)
    {
        printf("   #\n""  ##\n"" ###\n""####\n");
    }
    //Imprime piramide de 5 # de altura para a escolha 5, pulando uma linha entre a altura definida
    else if (altura == 5)
    {
        printf("    #\n""   ##\n""  ###\n"" ####\n""#####\n");
    }
    //Imprime piramide de 6 # de altura para a escolha 6, pulando uma linha entre a altura definida
    else if (altura == 6)
    {
        printf("     #\n""    ##\n""   ###\n""  ####\n"" #####\n""######\n");
    }
    //Imprime piramide de 7 # de altura para a escolha 7, pulando uma linha entre a altura definida
    else if (altura == 7)
    {
        printf("      #\n""     ##\n""    ###\n""   ####\n""  #####\n"" ######\n""#######\n");
    }
    //Imprime piramide de 8 # de altura para a escolha 8, pulando uma linha entre a altura definida
    else
    {
        printf("       #\n""      ##\n""     ###\n""    ####\n""   #####\n""  ######\n"" #######\n""########\n");
    }
}
