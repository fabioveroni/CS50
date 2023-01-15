// Desenvolver CASH - Programa para descobrir qual o menor número de moedas possível para um troco ou valor

#include <stdio.h>
#include <cs50.h>
#include <math.h>

//OBS : função round em math.h

int main(void)
{
    // Declaro um float para valores decimais na variavel cash que será imputada pelo usuário e um int para o contador de moedas
    float cash;
    int contador = 0;

    // Solicito o imput "Troca devida" de valor positivo  e maior que zero até que seja imputado corretamente
    do
    {
        cash = get_float("Troca devida:");
    }
    while (cash <= 0);

    // declaro a variável int centavos que pegara o valor de cash x 100 para arredondar a conta e reduzir as moedas/valores
    int centavos = round(cash * 100);

    // Loop verifica se o valor imputado é maior ou igual a 25. Caso for, tal valor é reduzido em 25 e o contador é acrecido em 1 para contar uma moeda. Repete até que o valor seja menor que 25
    if (centavos >= 25)
        do
        {
            centavos = (centavos - 25);
            contador++;
        }
        while (centavos > 24);

    // Loop verifica se o valor restante é maior ou igual a 10. Caso for, tal valor é reduzido em 10 e o contador é acrecido em 1 para contar uma moeda. Repete até que o valor seja menor que 10
    if (centavos >= 10)
        do
        {
            centavos = (centavos - 10);
            contador++;
        }
        while (centavos > 9);

    // Loop verifica se o valor restante é maior ou igual a 5. Caso for, tal valor é reduzido em 5 e o contador é acrecido em 1 para contar uma moeda. Repete até que o valor seja menor que 5
    if (centavos >= 5)
        do
        {
            centavos = (centavos - 5);
            contador++;
        }
        while (centavos > 4);

    // Loop verifica se o valor restante é menor que 5 e maior que 0. Caso for, tal valor é reduzido em 1 e o contador é acrecido em 1 para contar uma moeda. Repete até que o valor seja diferente de 0
    if (centavos < 5 && centavos > 0)
        do
        {
            centavos = (centavos - 1);
            contador++;
        }
        while (centavos != 0);
    // Imprime na tela o contador que é o exato número de moedas
    printf("%i\n", contador);
}
