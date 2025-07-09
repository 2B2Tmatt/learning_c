#include <stdio.h> 

void checkBalance(float balance); 
float deposit(); 
float withdraw(float balance);  

int main(){

    int choice = 0; 
    float balance = 0.0f; 

    printf("*** WELCOME TO THE BANK ***");

    do{
        printf("\n\nSelect an option:\n");
        printf("\n1. Check Balance\n"); 
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n"); 
        printf("\nEnter your choice: "); 
        scanf("%d", &choice); 

        switch(choice){
            case 1: 
                checkBalance(balance); 
                break;
            case 2: 
                balance += deposit(); 
                break;
            case 3: 
                balance -= withdraw(balance); 
                break; 
            case 4: 
                printf("\nThank you for using the bank!\n"); 
                break;
            default: 
                printf("\nInvalid choice! Please select 1-4\n");
        }

    }while(choice != 4); 

    return 0; 
}


void checkBalance(float balance){
    printf("Your current balance is: $%.2f", balance); 
}
float deposit(){
    float deposit = 0.0f; 
    printf("How much would you like to desposit?: "); 
    scanf("%f", &deposit); 
    return deposit; 
}
float withdraw(float balance){
    float withdraw = 0.0f; 
    printf("How much would you like to withdraw?: "); 
    scanf("%f", &withdraw); 
    return withdraw; 
}