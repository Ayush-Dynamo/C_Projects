#include <stdio.h>
#include <stdlib.h>

#define CAP 10

int arr[CAP];
int indx = -1;

// for printing Array
void prnt_Array()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Array -> ");
    for (int i = 0; i <= indx; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");    
}

// for Insert operations
void insert_operation()
{

    int choice, value, indx_num,ch;

    do
    {
        system("cls");
        prnt_Array();
        printf("\n====== Insert Opearations =====");
        printf("\n1. Create an Array");        
        printf("\n2. Append Element (end)");
        printf("\n3. Insert at Beginning");
        printf("\n4. Insert at Specific Index");
        printf("\n0. Back to Main Menu");
        printf("\n---------------------------------");
        printf("\nEnter Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        // Create an Array
        case 1:
            system("cls");
            printf("You can enter upto 10 elements (Enter no. elements):");
            scanf("%d", &indx_num);

            if(indx_num <= 10){
            for (int i = 0; i < indx_num; i++)
            {
                printf("Enter Element %d:", i + 1);
                scanf("%d", &arr[i]);
                indx = indx + 1;
            }
            prnt_Array();
            }else{
            printf("!!Your total number of elements are more that 10!!\n");
            printf("Press any key to back :");
            getchar();
            getchar();
                }    
            break;

            // Append Operation
        case 2:
            if (indx >= CAP - 1){   
                printf("Sorry limit is full\n");
                printf("Press any key to back :");
                getchar();
                getchar();

            }else
            {
                printf("---------------------------------");
                printf("\nEnter Value :");
                scanf(" %d", &value);

                indx++;
                arr[indx] = value;
                prnt_Array();
                printf("\n**--** Append Done **--**");
            }
            break;

        // Insert at bigninning
        case 3:
            do
            {
                system("cls");
                prnt_Array();
                printf("\nTwo Conditions");
                printf("\n1. Replace Bigninning Element");
                printf("\n2.Shift all Elements and Insert");
                printf("\n0.Exit");
                printf("\nEnter Your Choice :");
                scanf(" %d", &ch);

                switch (ch)
                {

                case 1:
                    printf("Enter Element :");
                    scanf("%d", &value);
                    arr[0] = value;
                    break;

                case 2:
                    indx++;
                    for(int i = indx; i >= 0; i--){
                        arr[i+1] = arr[i];
                    }
                    printf("Enter Element :");
                    scanf("%d", &value);
                    arr[0] = value;
                    break;

                case 0:
                     return;
                     break; 
                default:
                    printf("Your Enter Wrong Choice");
                    break;
                }
            } while (ch != 0);        

        // Insert at Specific Index
        case 4:
            system("cls");
            prnt_Array();
            printf("\nEnter index Number (0-9):");
            scanf("%d", &indx_num);
            printf("Enter value :");
            scanf("%d", &arr[indx_num]);
            prnt_Array();
            break;

                            
        case 0:
            return;
            break;    

        default:
            printf("!!Choose Wrong!!");
            printf("\nPress any key to back :");
            getchar();
            getchar();
            break;
        }

    }while(choice != 0);
}

// for Delete operations
void delete_operations(){

    int choice, indx_num;

    do
    {
        system("cls");
        prnt_Array();
        printf("\n====== Delete Opearations =====");
        printf("\n1. Remove last element (end)");
        printf("\n2. Remove first element");
        printf("\n3. Remove at specific index");
        printf("\n0. Back to Main Menu");
        printf("\n---------------------------------");
        printf("\nEnter Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            indx--;
            prnt_Array();
            break;

        case 2:
            for (int i = 0; i < indx; i++)
            {
                arr[i] = arr[i + 1];
            }
            indx--;
            prnt_Array();
            break;

        case 3:

            printf("Enter index :");
            scanf("%d", &indx_num);
            for (int i = indx_num; i < indx; i++)
            {
                arr[i] = arr[i + 1];
            }
            indx--;
            prnt_Array();
            break;

        case 0:
            return;
            break; 

        default:
            printf("!!Choose Worng!!");
            printf("\nPress any key to back :");
            getchar();
            getchar();
            break;
        }

    } while (choice != 0);
}

// for Update operations
void update_operations(){
    int choice, indx_num;

    do
    {
        system("cls");
        prnt_Array();
        printf("\n====== Update Opearations =====");
        printf("\n1. Update at specific index");
        printf("\n0. Back to Main Menu");
        printf("\n---------------------------------");
        printf("\nEnter Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter index :");
            scanf("%d", &indx_num);
            printf("Enter Value :");
            scanf("%d", &arr[indx_num]);
            prnt_Array();
            break;

        case 0:
            return;
            break;

        default:
            printf("Enter within the range !");
            printf("\nPress any key to back :");
            getchar();
            getchar();
            break;
        }

    } while (choice != 0);
}

// for Search operations
void search_operations(){
    printf("Update soon");
    printf("\nPress any key to retun :");
    getchar();
    getchar();
}

// for Sort operations
void sort_operations()
{

    int choice, temp;

    do
    {
        system("cls");
        prnt_Array();
        printf("\n====== Sort Opearations =====");
        printf("\n1. Sort Ascending");
        printf("\n2. Sort descending");
        printf("\n0. Back to Main Menu");
        printf("\n---------------------------------");
        printf("\nEnter Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i <= indx; i++)
            {
                for (int j = i + 1; j <= indx; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            prnt_Array();
            break;

        case 2:
            for (int i = 0; i <= indx; i++)
            {
                for (int j = i + 1; j <= indx; j++)
                {
                    if (arr[i] < arr[j])
                    {
                        temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                    }
                }
            }
            prnt_Array();
            break;  
            
        case 0:
            return;
            break;             

        default:
            printf("!!Choose Wrong!!");
            printf("\nPress any key to back :");
            getchar();
            getchar();
            break;
        }

    } while (choice != 0);
}

// for Reserve operations
void reverse_operations(){

    int temp;
    for(int i = 0; i <=indx/2; i++){
        temp = arr[i];
        arr[i]= arr[indx-i];
        arr[indx-i]=temp;
    }
}

// for Statistical operations
void statistical_operations(){
    
    int choice,sum=0,min,max;
    min = arr[0];
    max = arr[0];    
    float avg=0;

    do{
        system("cls");
        prnt_Array();
        if(sum > 0){
            printf("\n---------------------------");
            printf("\nSum is :%d",sum);
            printf("\n-----------------------------");
            sum = 0;
        }
        if(avg > 0){
            printf("\n------------------------------");
            printf("\nAverage is :%.2f",avg);
            printf("\n-------------------------------");
            avg = 0;
        }
        if(min >= 0 && max >= 0){
            printf("\n----------------------------------");
            printf("\n!!Press 3 to update!!");
            printf("\nMinimum :%d\nMaximum :%d",min,max);
        }
        printf("\n====== Sort Opearations =====");
        printf("\n1.Find sum");
        printf("\n2.Find average");
        printf("\n3.Find Minimum and Maximum");
        printf("\n0.Back to main menu :");
        printf("\nEnter your choice :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            for(int i = 0; i <= indx; i++){
                sum = sum+arr[i];
            }
            break;
        case 2:
            for(int i = 0; i <= indx; i++){
                sum = sum+arr[i];
                avg = (float)sum/(indx+1);
            }
            break;    
        
        case 3:
            for(int i = 0; i <= indx; i++){
                if(max<arr[i])
                    max = arr[i];
                if(min>arr[i])
                    min = arr[i];    
            }
            break;
                
        case 0:
            return;
            break; 

        default:
            printf("!!Choose Wrong!!");
            printf("\nPress any key to back :");
            getchar();
            getchar();
            break;
        }

    }while(choice != 0);
}

int main()
{

    int choice;

    do
    {
        system("cls");
        prnt_Array();
        printf("\n======== ARRAY MODIFIER ========");
        printf("\n1. Insert Operations");
        printf("\n2. Delete Operations");
        printf("\n3. Update Operations");
        printf("\n4. Search Operations");
        printf("\n5. Sort Operations");
        printf("\n6. Reverse Array");
        printf("\n7. Statistical Operations");
        printf("\n0.Exit");
        printf("\n================================");

        printf("\nEnter Your Choice {1-0} :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_operation();
            break;

        case 2:
            delete_operations();
            break;

        case 3:
            update_operations();
            break;

        case 4:
            search_operations();
            break;

        case 5:
            sort_operations();
            break;

        case 6:
            reverse_operations();   
            break;     
            
        case 7:
            statistical_operations();   
            break;             
        case 0:
            printf("\n-----------------------");
            printf("\n**ThankYour**");
            printf("\n-----------------------");
            break;
        default:
        printf("\n!!Choose Wrong!!");
            printf("\nPress any key to back :");
            getchar();
            getchar();
            break;
        }

    } while (choice != 0);

    return 0;
}
