#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 

int main(void){
    
    char item[50] = ""; 
    float price = 0.0f; 
    int quantity = 0; 
    char currency = '$'; 
    float total = 0.0f; 

    printf("What item would you like to buy?: "); 
    fgets(item, sizeof(item), stdin); 
    

    printf("What is the price for each?: "); 
    scanf("%f",&price); 

    printf("How many would you like?: "); 
    scanf("%d", &quantity);

    total = price * quantity; 
    
    printf("\nYou have bought %d %s", quantity, item); 
    printf("%c%.2f", currency, total); 


    return 0;     
}