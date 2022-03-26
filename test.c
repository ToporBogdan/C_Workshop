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


void mySwitch(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void mySwitchPointer(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void mySwitchPointerDoi(int** a, int** b)
{
    int *c;
    c = *a;
    *a = *b;
    *b = c;
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
    // printf("%d", isPrime(atoi(argv[1])));

    // int y = 10;
    // printf("Adresa lui y este %x\n", &y);

    // int* z = (int*)malloc(1 * sizeof(int));
    // *z = 20;
    // printf("Adresa este: %x, iar valoarea este: %d\n", z, *z);

    // int nr_1 = 100;
    // int nr_2 = 12112;
    // printf("Primul nr este: %d, al doilea este: %d\n", nr_1, nr_2);
    // mySwitch(nr_1, nr_2);
    // printf("Primul nr este: %d, al doilea este: %d\n", nr_1, nr_2);

    int* nr_1;
    nr_1 = (int*)malloc(1 * sizeof(int));
    *nr_1 = 100;

    int* nr_2;
    nr_2 = (int*)malloc(1 * sizeof(int)); 
    *nr_2 = 12112;
    
    // printf("Primul nr este: %d, al doilea este: %d\n", *nr_1, *nr_2);
    // mySwitchPointer(nr_1, nr_2);
    // printf("Primul nr este: %d, al doilea este: %d\n", *nr_1, *nr_2);

    int **nr_1_addr = (int**)malloc(1 * sizeof(int*));
    *nr_1_addr = nr_1;

    int **nr_2_addr = (int**)malloc(1 * sizeof(int*));
    *nr_2_addr = nr_2;

    printf("%d %d\n", **nr_1_addr, **nr_2_addr);
    mySwitchPointerDoi(nr_1_addr, nr_2_addr);
    printf("%d %d\n", **nr_1_addr, **nr_2_addr);

    // printf("Primul nr este: %d, al doilea este: %d\n", *nr_1, *nr_2);
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












