#include <stdio.h>
#include <stdbool.h> 

void hello(char name[], int age); //function prototype 
bool ageCheck(int age);

int main(){
    /*function prototype = Provides th ecompiler w/ info about a functions 
    name, return type, and parameters before its actual definition.
    Enables type checking and allows functions to be used before they're
    defined. Improves readability, organization, adn helps prevent errors. 
    */ 


   hello("Spongebob", 30); 
   if(ageCheck(30)){
    printf("You are old enough to work at the Krusty Krab"); 
   }
   else{
    printf("You must be 16+ to work at the Krusty Krab"); 
   }


    return 0; 
}

void hello(char name[], int age){
    printf("Hello %s\n", name); 
    printf("You are %d years old\n", age); 
}

bool ageCheck(int age){
    return age >= 16; 
}

