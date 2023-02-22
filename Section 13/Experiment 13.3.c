/*: Write a menu-base program that creates two one-dimensional arrays at runtime and
performs the following operations as chosen by the user. Separate functions should be written for each of
the following operations.
1. Insert an element in the 1st array (if size exceeds the allocated size, use (‘realloc()’)
2. Sort the 1st array.
3. Sort the 2nd array.
4. Merge the two arrays.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void printArray(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* InsertElementInArray(int *ptr, int *currentLocation, int *size)
{
    int newVal;
    printf("Enter the new value to insert: ");
    scanf("%d", &newVal);
    if (*currentLocation == *size)
    {
        // the previous array is full have to allocate a new one
        int *newArrayPtr;
        *size = *size + 1;
        newArrayPtr = (int *)calloc(*size, sizeof(int));
        if (newArrayPtr == NULL)
        {
            printf("Insufficent Memory!!!");
            exit(1);
        }
        int i;
        for (i = 0; i < *size - 1; i++)
        {
            newArrayPtr[i] = ptr[i];
        }
        newArrayPtr[i] = newVal;

        free(ptr);

        ptr = newArrayPtr;
    }
    else
    {
        // normally insert the element
        ptr[*currentLocation] = newVal;
    }
    // incrementing the index value
    *currentLocation = *currentLocation + 1;
    return ptr;
}
void sortTheArray(int *ptr, int size)
{
    printf("Enter \'a\' for sorting the array in ascending order else press any key");
    char key = getche();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (key == 'a' || key == 'A')
            {
                if (ptr[i] > ptr[j])
                {
                    int temp = ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j] = temp;
                }
            }
            else
            {
                if (ptr[i] < ptr[j])
                {
                    int temp = ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j] = temp;
                }
            }
        }
    }
    printf("\n");
}

void mergeTwoArray(int *result, int *array1, int *array2, int size1, int size2)
{
    int r = 0;
    for (int i = 0; i < size1; i++, r++)
    {
        result[r] = array1[i];
    }
    for (int i = 0; i < size2; i++, r++)
    {
        result[r] = array2[i];
    }
}

int main()
{
    int runTheLoop = 1, sizeA, indexA = 0, sizeB, indexB = 0, choice;
    printf("Enter the size of the first array: ");
    scanf("%d", &sizeA);
    printf("Enter the size of the second array: ");
    scanf("%d", &sizeB);

    // initialisation of the array using calloc function
    int *arrayA, *arrayB, *merged;
    arrayA = (int *)calloc(sizeA, sizeof(int));
    arrayB = (int *)calloc(sizeB, sizeof(int));
    merged = (int *)calloc(sizeA + sizeB, sizeof(int));

    if (arrayA == NULL || arrayB == NULL)
    {
        printf("!! insufficent memory !!");
        exit(1);
    }

    while (runTheLoop)
    {
        printf("==============================================================\n");
        printf("Enter 1 for Inserting an element in Array1 \n");
        printf("Enter 2 for Inserting an element in Array2 \n");
        printf("Enter 3 for Sorting the first array \n");
        printf("Enter 4 for Sorting the second array \n");
        printf("Enter 5 for merging the two array \n");
        printf("Enter 6 for exit \n");
        printf("==============================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("==============================================================\n");

        switch (choice)
        {
        case 1:
            // Enter 1 for Inserting an element in Array1
            arrayA = InsertElementInArray(arrayA, &indexA, &sizeA);
            printf("\nAfter adding element the new Array1 is: ");
            printArray(arrayA, sizeA);
            break;

        case 2:
            // Enter 2 for Inserting an element in Array2
            arrayB = InsertElementInArray(arrayB, &indexB, &sizeB);
            printf("\nAfter adding element the new Array2 is: ");
            printArray(arrayB, sizeB);
            break;

        case 3:
            // Enter 3 for Sorting the first array
            sortTheArray(arrayA, sizeA);
            printf("\nAfter sorting the elements the new Array1 is: ");
            printArray(arrayA, sizeA);
            break;

        case 4:
            // Enter 4 for Sorting the second array
            sortTheArray(arrayB, sizeB);
            printf("\nAfter sorting the element the new Array2 is: ");
            printArray(arrayB, sizeB);
            break;

        case 5:
            // Enter 5 for merging the two array
            merged = (int *)malloc((sizeA + sizeB) * sizeof(int));
            if (merged == NULL)
            {
                printf("No memory available!!...");
                continue;
            }
            mergeTwoArray(merged, arrayA, arrayB, sizeA, sizeB);
            printf("Merged array is: \n");
            printArray(merged, sizeA + sizeB);
            break;

        case 6:
            // Enter 6 for exit
            runTheLoop = 0;
            break;
        default:
            printf("Wrong input!!!.....\n");
        }
    }

    return 0;
}
