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

typedef struct ListNode                                 //defineste o structura de date noua
{
    int value;
    struct ListNode* nextItem;
} ListNode;

void printList(ListNode *head)
{
    while (head != NULL)
    {
        printf("%d - ", head->value);
        head = head->nextItem;
    }

    printf("\n");
}

ListNode *getNewItem(const int value)
{
    ListNode *NewItem = NULL;
    NewItem = (ListNode*)malloc(1 * sizeof(ListNode));
    NewItem->value = value;
    NewItem->nextItem = NULL;
    return NewItem; 
}

ListNode addNodeInList(ListNode **head, const int number, const int poz)
{
    ListNode *traverse;
    traverse = *head;
    int NodePos = 0;
    ListNode *addedNumber;
    addedNumber = getNewItem(number);

    if (NodePos == 0)
    {
        addedNumber->nextItem = *head;
        *head = addedNumber;
    }

    while (traverse != NULL)
    {
        if (NodePos == poz-2)
        {
            addedNumber->nextItem = traverse->nextItem;
            traverse->nextItem = addedNumber;
        }
        
        traverse = traverse->nextItem;
        printf("Suntem la pozitia %d \n", NodePos);
        NodePos = NodePos + 1;
        
    }
    return;
    
}

int main(int argc, char const *argv[])
{
    ListNode *n1, *n2, *n3, *n4, *n5;
    ListNode *head;

    n1 = getNewItem(12);
    n2 = getNewItem(24);
    n3 = getNewItem(31);
    n4 = getNewItem(47);
    n5 = getNewItem(58);

    head = n5;
    n5->nextItem = n4;
    n4->nextItem = n3;
    n3->nextItem = n2;
    n2->nextItem = n1;
    n1->nextItem = NULL;


    printList(head);
    addNodeInList(&head, 99, 4);
    printList(head);










    return 0;
}
