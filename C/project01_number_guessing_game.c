#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int random_number = (rand()%100)+1;
    int guesses = 0;
    int user_num = 111111111;
        printf("WELCOME TO NUMBER GUESSER GAME : \n\n");
        printf("RULES : \n\n");
        printf(">>THE PROGRAM WILL GENERATE A RANDOM NUMBER BETWEEN 1 TO 100\n\n>>YOU HAVE TO GUESS IT RIGHT IN AS LOW GUESSES AS POSSIBLE!!\n\n");

    while(user_num!=random_number){
        printf("Enter a number : \n");
        scanf("%d", &user_num);
        if(user_num<1||user_num>100){
            printf("ENTER NUMBER BETWEEN 1 TO 100 ONLY\n");
            continue;
        }
        if(user_num>random_number){
            printf("OOPS!! THINK LOWER\n");

        }
        if(user_num<random_number){
            printf("OOPS!! THINK HIGHER\n");

        }
        guesses++;
    }
    if(user_num==random_number){
        printf("CONGRATULATIONS!!\n\nWOW YOU GUESSED IT RIGHT in %d guesses\n", guesses);
    }
    return 0;

}
