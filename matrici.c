#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x[2][3];          // 2 linii 3 coloane
    int aux = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            aux = aux + 1;
            x[i][j] = aux; 
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {    
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    int** y;
    y = (int**)malloc(2 * sizeof(int*));

    for (int i = 0; i < 2; i++)
    {
        y[i] = (int*)malloc(3 * sizeof(int));
        // *(y+i) = (int*)malloc(3 * sizeof(int));
    }
    
    
    printf("\n");
    aux = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            aux = aux + 2;
            y[i][j] = aux; 
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {    
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        free(y[i]);
    }
    free(y);







    return 0;
}
