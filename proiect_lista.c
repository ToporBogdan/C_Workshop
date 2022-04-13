#include <stdio.h>
#include <stdlib.h>

/*
    addNodeInList - primeste lista, un numar si o pozitie si adauga numarul respectiv pe pozitia dorita in lista
    removeNodeFromList - primeste lista si o pozitie si sterge numarul respectiv pe pozitia dorita in lista
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

ListNode* getNewItem(const int value)
{
    ListNode *NewItem = NULL;

    NewItem = (ListNode*)malloc(1 * sizeof(ListNode));
    
    NewItem->value = value;
    NewItem->nextItem = NULL;
    
    return NewItem; 
}

ListNode* addNodeAtBeg(ListNode* head, const int value)
{
    ListNode* addedNumber;
    addedNumber = getNewItem(value);
    addedNumber->nextItem = head;
    head = addedNumber;
    return head;
}

ListNode* addNodeInList(ListNode* head, const int number, const int poz)
{
    ListNode* traverse;
    traverse = head;
    int NodePos = 1;
    ListNode* addedNumber;
    addedNumber = getNewItem(number);

    if (traverse == NULL)
    {
        head = addedNumber;
    }

    if (poz == 1)
    {
        head = addNodeAtBeg(head, number);
        traverse = head;
    }

    while (traverse != NULL)
    {
        if (NodePos == poz-1)
        {
            addedNumber->nextItem = traverse->nextItem;
            traverse->nextItem = addedNumber;
        }
        // printf("Traverse are valoarea %d \n", traverse->value);
        traverse = traverse->nextItem;
        // printf("Suntem la pozitia %d \n", NodePos);
        NodePos = NodePos + 1;
        
    }
    return head; 
    
}

ListNode* removeNodeFromList(ListNode* head, const int poz)
{
    ListNode *current, *prev;
    current = head;
    int Nodepos = 1;

    if (head == NULL)
    {
        printf("Nothing to remove. The list is already empty.");
    }
    else if (poz == 1)
    {
        head = current->nextItem;
        free(current);
        current = NULL;
    }
    else
    {
        while (poz != 1)
        {
            prev = current;
            current = current->nextItem;
            Nodepos = Nodepos + 1;
            if (Nodepos == poz)
            {
                prev->nextItem = current->nextItem;
                free(current);
                current = NULL;
                break;
            }
            
        }
        
    }
    return head;
}

int isValueInList(ListNode* head, const int number)
{
    // ListNode* traverse;
    // traverse = head;
    // int NodePos = 1;
    // int check = 0;

    while (head != NULL)
    {
        if (head->value == number)
        {
            // printf("The value %d is present in the list, on the %d position \n", number, NodePos);
            // check = 1;
            return 1;
        }
        head = head->nextItem;
        // NodePos = NodePos + 1;

    }

    // if (check == 0)
    // {
        // printf("The number %d is not in this list \n", number);
    // }
    
    return 0;
}

void freeList(ListNode* head)
{
    ListNode* traverse;
    traverse = head;
    while (traverse != NULL)
    {
        traverse = traverse->nextItem;
        free(head);
        head = traverse;
    }
    if (head == NULL)
    {
        printf("The list has been removed and the memory was dinamically freed \n");
    }
    
}

int main(int argc, char const *argv[])
{
    ListNode *n1, *n2, *n3, *n4, *n5;
    ListNode *head = NULL;

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


    // printList(head);

    // ListNode* testADD;
    head = addNodeInList(head, 99, 6);
    printList(head);

    // ListNode* testRemove;
    head = removeNodeFromList(head, 1);
    printList(head);

    // printf("%s\n", isValueInList(head, 333) ? "e in lista" : "nu e in lista");
    // printf("%s\n", isValueInList(head, 31) ? "e in lista" : "nu e in lista");
    freeList(head);


    return 0;
}
