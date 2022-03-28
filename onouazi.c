#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    int x[10];
    for (int i = 0; i < 10; i++)
    {
        *(x+i) = i*i;
    }
    for (int i = 0; i < 10; i++)
    {
        // printf("%d ", x[i]);
        printf("%d ", *(x+i));
    }
    printf("\n");

    int* y;
    y = (int*)malloc(10*(sizeof(int)));

    for (int i = 0; i < 10; i++)
    {
        *(y+i) = i*i*i;
    }
    for (int i = 0; i < 10; i++)
    {
        // printf("%d ", y[i]);
        printf("%d ", *(y+i));
    }
    free(y);

    return 0;
}
