/* Create a structure representing a bank account of a customer. What fields did
you use and why? */

#include <stdio.h>
#include <string.h>
typedef struct bankaccount{
    char name[10];
    int account;
    float balance;
}Account;
int main(){
    Account user1, user2;
    strcpy(user1.name, "Madhav");
    user1.account = 123177;
    user1.balance = 100700.01;
    strcpy(user2.name, "Kunal");
    user2.account = 114177;
    user2.balance = 107700.02;
    for(int i = 1; i<=2; i++){
        if(i==1){
            printf("Name: %s, Account No.: %d, Balance: %.2f\n", user1.name, user1.account, user1.balance);
        }
        if(i==2){
            printf("Name: %s, Account No. : %d, Balance: %.2f", user2.name, user2.account, user2.balance);
        }
    }
    return 0;

}
