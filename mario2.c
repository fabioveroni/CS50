// Constuir as "Piramides" do mario, conforme imput do usuário quanto ao tamanho

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Criando uma variável inteira chamada i para receber o imput do usuário
    int i;
    //Fazendo um loop, obrigado o imput ser entre 1 e 8 positivo
    do
    {
        i = get_int("Determine a altura da piramide entre 1 e 8: ");
    }
    while (i < 1 || i > 8);

    // Mostrando o resultado da piramide conforme imput do usuário
    if (i == 1)
    {
        printf("#  #\n");
    }
    else if (i == 2)
    {
        printf(" #  # \n" "##  ##\n");
    }
    else if (i == 3)
    {
        printf("  #  #  \n" " ##  ## \n" "###  ###\n");
    }
    else if (i == 4)
    {
        printf("   #  #   \n" "  ##  ##  \n" " ###  ### \n""####  ####\n");
    }
    else if (i == 5)
    {
        printf("    #  #    \n" "   ##  ##   \n" "  ###  ###  \n" " ####  #### \n" "#####  #####\n");
    }
    else if (i == 6)
    {
        printf("     #  #     \n" "    ##  ##    \n" "   ###  ###   \n" "  ####  ####  \n" " #####  ##### \n" "######  ######\n");
    }
    else if (i == 7)
    {
        printf("      #  #      \n" "     ##  ##     \n" "    ###  ###    \n" "   ####  ####   \n" "  #####  #####  \n" " ######  ###### \n"
               "#######  #######\n");
    }
    else // imput de 8
    {
        printf("       #  #      \n" "      ##  ##      \n" "     ###  ###     \n" "    ####  ####    \n" "   #####  #####   \n"
               "  ######  ######  \n" " #######  ####### \n" "########  ########\n");
    }
}

