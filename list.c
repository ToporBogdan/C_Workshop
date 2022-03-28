#include <stdio.h>
#include <stdlib.h>

/*
    addNodeInList - primeste lista, un numar si o pozitie si adauga numarul respectiv pe pozitia dorita in lista
    removeNodeFromList - primeste lista, un numar si o pozitie si sterge numarul respectiv pe pozitia dorita in lista
    isValueInList - primeste lista si un numar si verifica daca exista numarul in lista
    printList - primeste lista si printeaza toate numerele din ea
    freeList - primeste lista si elibereaza toata memoria alocata dinamic aferenta ei

    Considerand toate cazurile:
        - lista e goala
        - adaugare/stergere la inceput
        - adaugare/stergere la mijloc
        - adaugare/stergere la sfarsit

    Youtube & Google are your friends :D
*/

typedef struct ListNode
{
    int value;
    struct ListNode* nextAddress;
} ListNode;

void PrintList(ListNode *head)
{
    while (head != NULL)
    {
        printf("%d ", (*head).value);
        head = (*head).nextAddress;
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    // ListNode* test;
    // (*test).value = 10;
    // test->value = 10;

    ListNode* x;
    x = (ListNode*)malloc(1 * sizeof(ListNode));
    (*x).value = 10;

    ListNode* y;
    y = (ListNode*)malloc(1 * sizeof(ListNode));
    (*y).value = 30;

    ListNode* z;
    z = (ListNode*)malloc(1 * sizeof(ListNode));
    (*z).value = 20;

    // (*x).nextAddress = y;
    // (*y).nextAddress = z;
    // PrintList(x);
    // PrintList(y);

    (*x).nextAddress = z;
    (*z).nextAddress = y;
    PrintList(x);

    (*x).nextAddress = y;
    // free(z);
    PrintList(x);



    return 0;
}
