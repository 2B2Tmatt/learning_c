#include <stdio.h> 

int main(void){

    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age); 


    if(age >= 18){
        printf("You are an adult"); 
    }
    else if(age < 0){
        printf("You haven't been born yet"); 
    }
    else if (age == 0){
        printf("You were just born"); 
    }
    else{
        printf("You are a child"); 
    }

    return 0; 
}