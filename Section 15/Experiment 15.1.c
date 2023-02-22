/* Write a menu-based program to implement the following operations on a single linked
list based on user’s choice.
1. Create a single linked list.
2. Traverse a single linked list.
3. Insert a node at the beginning.
4. Insert a node at the end.
5. Insert a node at an intermediate position after a given node.
6. Delete the first node.
7. Delete the last node.
8. Delete an intermediate node after a given node.
9. Sorting the node values.
*/
#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int value;
    struct Node *next;
};

void printLinkedList(struct Node *init)
{
    struct Node *ptr = init;
    while (ptr != NULL)
    {
        // printf("(%d, %p), ", ptr->value, ptr->next);
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node *createElement(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("\nNot Enough Memory\n");
        exit(0);
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

struct Node *createAList(struct Node *start)
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    start = createElement(value);
    printf("Sucessfully Element Created......\n");
    char choice;
    struct Node *ptr = start;
    printf("Want to add more elements(press \'y\' for yes or press any key): ");
    choice = getche();
    while (choice == 'Y' || choice == 'y')
    {
        printf("\nEnter the value: ");
        scanf("%d", &value);
        ptr->next = createElement(value);
        printf("value = %d \n", ptr->next->value);
        ptr = ptr->next;
        printf("Sucessfully Element Created......\n");

        printf("Want to add more elements(press \'y\' for yes or press any key): ");
        choice = getche();
    }
    printf("\n");
    return start;
}

struct Node *InsertNodeAtBegning(struct Node *start)
{
    int value;
    printf("Enter the element value to add at beginning: ");
    scanf("%d", &value);
    struct Node *newNode = createElement(value);
    newNode->next = start;
    return newNode;
}

struct Node *InsertNodeAtEnding(struct Node *start)
{
    int value;
    printf("Enter the element value to add at end: ");
    scanf("%d", &value);
    struct Node *ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *newNode = createElement(value);
    ptr->next = newNode;
    return start;
}

struct Node *InsertNodeInIntermediate(struct Node *start)
{
    int value, addAfterValue;
    printf("Enter the element value to add at the intermediate position: ");
    scanf("%d", &value);
    printf("Enter value of the node after which the node to be add: ");
    scanf("%d", &addAfterValue);
    struct Node *newNode = createElement(value);
    struct Node *ptr = start, *prev = start;
    // checking for the value is in start or not
    if (start->value == addAfterValue)
    {
        ptr = ptr->next;
    }
    while (ptr->value != addAfterValue)
    {
        if (ptr == NULL)
            break;
        prev = prev->next;
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        printf("The node is not present in the linked list!!!.....\n");
        printf("Failed to add the node !!!..\n");
        return start;
    }
    newNode->next = ptr->next;
    prev->next = newNode;

    return start;
}

struct Node *DeleteStart(struct Node *start)
{
    if (start == NULL)
    {
        printf("Nothing to delete in the linked List....\n");
        return start;
    }
    struct Node *ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

struct Node *DeleteEnd(struct Node *start)
{
    if (start == NULL)
    {
        printf("Nothing to delete in the linked List....\n");
        return start;
    }
    struct Node *ptr = start, *prev = start;
    if (ptr->next == NULL)
    {
        start = NULL;
        printf("No Node left in the linked list %p\n", start);
    }
    else
    {
        if (start->next != NULL)
        {
            ptr = ptr->next;
        }
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            prev = prev->next;
        }
        prev->next = NULL;
    }
    free(ptr);
    return start;
}

struct Node *DeleteInIntermediate(struct Node *start)
{
    if(start == NULL)
    {
        printf("No node avalable in linked list create one first...\n");
        return start;
    }
    int beforeNodeVal;
    printf("Enter the value after which the node is to be deleted: ");
    scanf("%d", &beforeNodeVal);

    struct Node *prev = start, *ptr= start;
    while(ptr->next != NULL)
    {
        if(prev->value == beforeNodeVal)
        {
            break;
        }
        if(ptr != start)
        {
            prev = prev->next;
        }
        ptr = ptr->next;
    }
    if(prev->value != beforeNodeVal && ptr->next == NULL)
    {
        printf("No Node available to delete.....\n");
        return start;
    }
    prev->next = ptr->next;
    free(ptr);

    return start;
}
struct Node *SortLinkedList(struct Node *start)
{
    struct Node *ptr1, *ptr2;
    char choice;
    printf("Enter 'A' for ascending order sorting or press Any key for decending order: ");
    choice = getche();

    for(ptr1 = start; ptr1->next != NULL; ptr1 = ptr1->next)
    {
        for(ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
        {
            if( choice == 'A' || choice == 'a' )
            {
                if(ptr1->value > ptr2-> value)
                {
                    int temp = ptr1->value;
                    ptr1->value = ptr2->value;
                    ptr2->value = temp;
                }
            }
            else
            {
                if(ptr1->value < ptr2-> value)
                {
                    int temp = ptr1->value;
                    ptr1->value = ptr2->value;
                    ptr2->value = temp;
                }
            }
        }
    }
    return start;
}

void main()
{

    struct Node *start;
    int choice = 1;

    while (choice)
    {
        printf("\n");
        printf(" +-----------------------------------------------------------------------------------+\n");
        printf(" | Enter \'1\' Create a single linked list.                                            !\n");
        printf(" | Enter \'2\' Traverse a single linked list.                                          !\n");
        printf(" | Enter \'3\' Insert a node at the beginning.                                         !\n");
        printf(" | Enter \'4\' Insert a node at the end.                                               !\n");
        printf(" | Enter \'5\' Insert a node at an intermediate position after a given node.           !\n");
        printf(" | Enter \'6\' Delete the first node.                                                  !\n");
        printf(" | Enter \'7\' Delete the last node.                                                   !\n");
        printf(" | Enter \'8\' Delete an intermediate node after a given node.                         !\n");
        printf(" | Enter \'9\' Sorting the node values.                                                !\n");
        printf(" | Enter \'0\' Exit.                                                                   !\n");
        printf(" +-----------------------------------------------------------------------------------+\n | ");
        scanf("%d", &choice);
        printf(" +-----------------------------------------------------------------------------------+\n");
        switch (choice)
        {
        case 1:
            start = createAList(start);
            printf("  The Singly Linked List is: \n  ");
            printLinkedList(start);
            break;

        case 2:
            printf("  The elements of the linked List is: \n  ");
            printLinkedList(start);
            break;

        case 3:
            start = InsertNodeAtBegning(start);
            printf("After adding at the begning the linked list is:\n  ");
            printLinkedList(start);
            break;

        case 4:
            start = InsertNodeAtEnding(start);
            printf("  After adding at the ending the linked list is:\n  ");
            printLinkedList(start);
            break;

        case 5:
            start = InsertNodeInIntermediate(start);
            if (start != NULL)
            {
                printf("  After adding at particular position the linked list is:\n  ");
                printLinkedList(start);
            }
            break;

        case 6:
            start = DeleteStart(start);
            if (start != NULL)
            {
                printf("  After deleting the first node the linked list is:\n  ");
                printLinkedList(start);
            }
            break;

        case 7:
            start = DeleteEnd(start);
            if (start != NULL)
            {
                printf("  After deleting the last node the linked list is:\n  ");
                printLinkedList(start);
            }
            break;

        case 8:
            start = DeleteInIntermediate(start);
            if (start != NULL)
            {
                printf("  After deleting the Intermediate node the linked list is:\n  ");
                printLinkedList(start);
            }
            break;

        case 9:
            start = SortLinkedList(start);
            if (start != NULL)
            {
                printf("  After Sorting the linked list is:\n  ");
                printLinkedList(start);
            }
            break;

        case 0:
            break;

        default:
            printf("\nInvalid Input!!!\n");
        }
    }
    getch();
}
