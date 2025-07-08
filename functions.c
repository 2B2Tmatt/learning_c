#include <stdio.h> 
#include <string.h>

void happyBirthday(char name[], int age){
    printf("\nHappy birthday to you!"); 
    printf("\nHappy birthday to you!"); 
    printf("\nHappy birthday dear %s!", name); 
    printf("\nHappy birthday to you!"); 
    printf("\nYou are %d years old!\n", age); 
}

int main(){

    char name[30] = "";
    int age = 0; 

    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin); 
    name[strlen(name) -1 ] = '\0'; 
    printf("\nWhat is your age?: "); 
    scanf(" %d", &age); 

    happyBirthday(name, age); 
    return 0; 
}