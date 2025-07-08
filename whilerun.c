#include <stdio.h> 
#include <stdbool.h> 
#include <ctype.h> 

int main(){

    bool isRunning = true; 
    char response = '\0'; 

    while(isRunning){
        printf("You are playing a game\n"); 
        printf("Would you like to continue(Y/N)"); 
        scanf(" %c", &response); 
        response = toupper(response); 
        if(response != 'Y'){
            isRunning = false; 
        }
    }

    return 0; 
}