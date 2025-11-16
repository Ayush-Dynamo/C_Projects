#include <stdio.h>
#include <stdlib.h>


    char arr[]= {'0','1','2','3','4','5','6','7','8','9'};
    
    void prnt_board(){
        system("cls");

        printf("\nPlayer 1: X\nPlayer 2: O\n");
        
        printf("\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("|         |     |           |\n");
        printf("|      %c  |  %c  |  %c        |\n",arr[7],arr[8],arr[9]);
        printf("|         |     |           |\n");
        printf("|    ------------------     |\n");
        printf("|         |     |           |\n");
        printf("|      %c  |  %c  |  %c        |\n",arr[4],arr[5],arr[6]);
        printf("|         |     |           |\n");
        printf("|    ------------------     |\n");
        printf("|         |     |           |\n");
        printf("|      %c  |  %c  |  %c        |\n",arr[1],arr[2],arr[3]);
        printf("|         |     |           |\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");        
    }

    int check_win(){

        if(arr[1] == arr[2] && arr[2] == arr[3])
            return -1;
        if(arr[4] == arr[5] && arr[5] == arr[6])
            return -1; 
        if(arr[7] == arr[8] && arr[8] == arr[9])
            return -1;                   
        if(arr[1] == arr[4] && arr[4] == arr[7])
            return -1;
        if(arr[2] == arr[5] && arr[5] == arr[8])
            return -1;
        if(arr[3] == arr[6] && arr[6] == arr[9])
            return -1;                                    
        if(arr[1] == arr[5] && arr[5] == arr[9])
            return -1;
        if(arr[3] == arr[5] && arr[5] == arr[7])
            return -1;
        return 1;                                
    }
void main(){

    int player=1,input,status=-1,result;

    while(status == -1){
    prnt_board();
    player = (player%2==0)? 2:1;
    char mark = ( player == 1) ? 'X' : 'O';
    printf("\nPlayer %d :",player);
    scanf("%d",&input);
    arr[input]= mark;
    player++;

    result = check_win();
    prnt_board();
    if(result == -1){
        printf("Player %d \n**Wins**\n",player-1);
        printf("Press any key to end :");
        getchar();
        getchar();
        status = 1;
    }
    prnt_board();
    }




}