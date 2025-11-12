#include <stdio.h>
#include <stdlib.h>

#define CAP 10

int arr[CAP];
int indx = -1;

// for printing Array
void prnt_Array()
{
    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    for (int i = 0; i <= indx; i++)
    {
        printf("%d,", arr[i]);
    }
}

// for Insert operations
void insert_operation()
{

    int choice, value, indx_num;
        
    do
    {
        system("cls");
        prnt_Array();
        printf("\n====== Insert Opearations =====");
        printf("\n1. Append Element (end)");
        printf("\n2. Insert at Beginning");
        printf("\n3. Insert at Specific Index");
        printf("\n4. Insert Multiple Elements");
        printf("\n5. Back to Main Menu");
        printf("\n---------------------------------");
        printf("\nEnter Choice:");
        scanf("%d", &choice);

        switch (choice){
        // Append Operation
        case 1:
            if (indx >= CAP - 1)
                printf("Sorry limit is full");

            else{            
                printf("---------------------------------");
                printf("\nEnter Value :");
                scanf("%d", &value);

                indx++;
                arr[indx] = value;
                prnt_Array();
                printf("\n**--** Append Done **--**");
            }
            break;

        // Insert at bigninning
        case 2:
            do{
                system("cls");
                printf("Two Conditions");
                printf("\n1. Replace Bigninning Element");
                printf("\n2.Shift all Elements and Insert");
                printf("\n3.Exit");
                printf("\nEnter Your Choice :");
                scanf("%d", &choice);

                switch (choice){

                case 1:
                        printf("Enter Element :");
                        scanf("%d", &value);
                        arr[0] = value;
                        prnt_Array();
                        break;

                case 2:
                        printf("Wait For new Update......");

                default:
                    printf("Your Enter Wrong Choice");
                    break;
                }
            } while (choice != 3);

        // Insert at Specific Index
        case 3:
            system("cls");
            printf("Enter idex Number (0-9):");
            scanf("%d", &indx_num);
            printf("Enter value :");
            scanf("%d", &arr[indx_num]);
            prnt_Array();
            break;

        // Insert Multiple Values
        case 4:
            system("cls");
            printf("You can enter upto 10 elements (Enter no. elements):");
            scanf("%d", &indx);
            for (int i = 0; i < indx; i++)
            {
                printf("Enter Element %d:", i + 1);
                scanf("%d", &arr[i]);
            }
            prnt_Array();
            break;

        default:
            break;
        }

    } while (choice != 0);
}

int main()
{
    system("cls");
    int choice;

    do
    {
        printf("======== ARRAY MODIFIER ========");
        printf("\n1. Insert Operations");
        printf("\n2. Delete Operations");
        printf("\n3. Update Operations");
        printf("\n4. Search Operations");
        printf("\n5. Sort Operations");
        printf("\n6. Reverse Array");
        printf("\n7. Arithematic Operations");
        printf("\n0.Exit");
        printf("\n================================");

        printf("\nEnter Your Choice {1-0} :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_operation();
            break;

        default:
            break;
        }

    } while (choice != 0);

    return 0;
}