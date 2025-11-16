#include <stdio.h>
#include <stdlib.h>

#define TOTAL_GAMES 5 

typedef struct{
    char name[30];
    float price;
    char platform[25];
}Gameitems;

int arr[5],tmep;

void store_menu(){
    int choice;
        Gameitems store[TOTAL_GAMES]={
        {"Cyber Punk 2077", 3999.00,"PC/XBOX"},
        {"GTA 6          ", 1999.00,"PS-5/Quantum computer"},
        {"GTA 5          ", 1500.00,"PC/Mobile"},
        {"RDR 4          ", 1399.00,"PC/Super Computer"},
        {"Super Mario    ", 1999.00,"Atari 8000"},
    };
    printf("//--|| RYNOX PRTIVATE LTD ||--//\n");
    printf("------------------------------------------\n");    
    for(int i = 0; i < TOTAL_GAMES; i++){
        printf("* %d. %s-  %.2f (%s)\n",i+1,store[i].name,store[i].price,store[i].platform);
    }

}

int prnt_recipt(){
    char choice[3];
    printf("Want do print Recipt (yes/no) ");
    scanf("%s",choice);

    if(strcmp(choice, "yes")==0){
        printf("===== PURCHASE RECEIPT =====");
        for(int i = 0; i < tmep; i++){
            printf("%d %s- %.2f\n",i+1,store[arr[i]].price,);
        }
    }
}

int purchase(){
        int ch;
        do{
        system("cls");
        printf("------------------------------------------");
        printf("\nWant to Buy any Game ??");
        printf("\n------------------------------------------");        
        printf("\n1.Yesss");
        printf("\n2.Noo just coming for fun !!");
        printf("\n==========================================");
        printf("\nEnter Choice :");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 :{
        int num_games,choice;
            do{
                system("cls");
                store_menu();
                printf("\n=====================================");
                printf("\n1: Purchase Single Game");
                printf("\n2: Purchase Multiple Games");
                printf("\n0: Return");
                printf("\n=====================================");                

                printf("\nEnter Choice :");
                scanf("%d",&choice);

                switch (choice)
                {
                case 1:{ int ch1;
                    printf("\nChoose Game :");
                    scanf("%d",&ch1);
                    printf("\nThankYou, Good Deal !!");
                    // prnt_recipt();
                    break;
                }
                case 2:
                    printf("\nEnter Number of Total Games :");
                    scanf("%d",temp);
                    for(int i = 0; i < temp; i++){
                        printf("\nSelect Game :");
                        scanf("%d",&arr[i]);
                    }
                    // prnt_recipt();
                    break;
                
                default:
                    break;
                }
            }while(choice != 0);
        
        }case 2:
        break;
        default:
            break;
        };
    }while(ch != 2);
}


int main() {

    int choice;
    system("cls");
    printf("***** Welcome to Rynox Gaming *****\n");
    do{
        printf("1.To see Available Games\n");
        printf("2.To see Upcoming Games\n");
        printf("0.To Exit\n");

        printf("Enter Your Choice :");
        scanf("%d",&choice);

        if(choice == 1 || choice == 2 || choice == 0){

            switch (choice)
            {
            case 1:
                system("cls");
                store_menu();
                purchase();
                break;
            
            default:
                break;
            }

        }
    }while(choice != 0);


    return 0;
}