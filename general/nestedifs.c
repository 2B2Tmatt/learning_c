#include <stdio.h>
#include <stdbool.h> 

int main(){
    float price = 10.00f; 
    bool isStudent = false; //10% discount 
    bool isSenior = false; //20% discount 

    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 10%%\n"); 
            printf("You get a senior discount of 20%%\n"); 
            price *= .7; 
        } 
        else{
            printf("You get a student discount of 10%%\n"); 
            price *= 0.9; 
        }
        
    }
    else{
        if(isSenior){
            
            printf("You get a senior discount of 20%%\n"); 
            price *= .8; 
        } 
    }
    printf("The price of a ticket is $%.2f\n", price); 
}