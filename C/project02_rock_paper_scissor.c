/* Snake, water, gun or rock, paper, scissors is a game most of us have played during
school time. (I sometimes play it even now).
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose snake/water or gun. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    printf("WELCOME TO ROCK, PAPER, SCISSORS GAME\nCHOOSE EITHER ROCK, PAPER, SCISSORS\n");
    printf("Enter 1 for ROCK, 2 FOR PAPER AND 3 FOR SCISSORS\n");
    int num = (rand()%3)+1;
    int choice;
    int win = 0;
    while(win!=1){
        scanf("%d", &choice);
        if(choice<1 || choice>3){
            printf("STUPID READ THE RULES PLEASE");
            break;
        }
        else if(choice == num){
            printf("ITS A DRAW!!");
            break;
        }
        else if(choice == 1 && num == 2){
            printf("Your rock crumbled in front of paper\n AI won\n");
            win = 1;

        }
        else if(choice == 1 && num == 3){
            printf("Your rock broke the scissors\n You won\n");
            win = 1;
        }
        else if(choice == 2 && num == 1){
            printf("Your paper crumbled the rock\n You won\n");
            win = 1;
        }
        else if(choice == 2 && num == 3){
            printf("Your paper got teared by the scissors\nAI won\n");
            win =1 ;
        }
        else if(choice == 3 && num == 1){
            printf("Your scissor appeared to be weak in front of rock\n AI won\n");
            win = 1;
        }
        else if(choice == 3 && num == 2){
            printf("Your scissor teared through opponent's paper\n You won\n");
            win = 1;
        }
    }
    return 0;
}
