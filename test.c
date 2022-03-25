#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RONALDO_CR 7

int functia(int bubu)
{
    bubu = bubu / 2;
    bubu = bubu * 4;
    // bubu *= 4 ;
    return bubu;
}

int isPrime(int numar)
{
    for (int i = 2; i <= sqrt(numar); i++)
    {
        if (numar % i == 0)
        {
            return 0;
        }
    }
    return 1;   



}



int main(int argc, char const *argv[])
{
    // printf("%d\n", argc); 
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("%s ", argv[i]);
    // }
    // int x = 10;
    // float y = 51.9;
    // double z = 11.11;
    // char c = 'C';
    // short s = 188;
    // printf("%d", s);
    // printf("This\nis an int %d, as vrea sa printez bani %.1f, blablabla %c          %.3lf\n", 4, 51.1, 'p', 87.444);
    // printf("mama\b");

    // printf("%d", functia(48));
    printf("%d", isPrime(atoi(argv[1])));


    return 0;
}

/*

VOCABULAR

\n - new line
\t - tab - baga un tab in textul respectiv de dimensiune cat e tabul predefinit
\r - carry row - pe win tr sa pui \r\n
\s - space (un spatiu)
\b - sterge un char din strinigul unde am pus \b si ma muta cu cursorul o poz inainte (adica backspace) 
\a - comunici cu "soneria" din calculator

*/












