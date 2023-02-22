/* An item is represented by the following attributes:
- Either a model number (string) or an item code (string)
- Name (string)
- Price (float)
Write a program using union to read the information for 5 items from the keyboard and print the same on
the screen.
*/
#include<stdio.h>
#include<conio.h>
union id
{
    char modelnumber[20];
    char itemcode[20];
};

struct details
{
    union id itemdetail;
    char name[20];
    float price;
};

void main()
{
    struct details item[5];
    int i;
    char choice;
    for(i=0; i<5; i++)
    {
        printf("\n To Enter Model Number (press 1) or for Item Code (press any key) :");
        choice=getche();
        if(choice=='1')
        {
            printf("\n Enter Model Number of Item :");
            scanf("%s",&item[i].itemdetail.modelnumber);
        }
        else
        {
            printf("\n Enter Item Code :");
            scanf("%s",&item[i].itemdetail.itemcode);
        }
        printf("\n Enter Item Name :");
        scanf("%s",item[i].name);
        printf("\n Enter Item Price :");
        scanf("%f",&item[i].price);
    }
    printf("\n Item Details");
    printf("--------------");
    for(i=0; i<5; i++)
    {
        if(choice=='1')
        {
            printf("\n Model Number : %s",item[i].itemdetail.modelnumber);
        }
        else
        {
            printf("\n Item Code : %s",item[i].itemdetail.itemcode);
        }
        printf("\n Item Name : %s",item[i].name);
        printf("\n Item Price : %.2f",item[i].price);
    }
    getch();
}
