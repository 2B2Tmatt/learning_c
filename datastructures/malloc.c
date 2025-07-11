#include <stdio.h> 
#include <stdlib.h> 

int main(){
    //malloc() a function in C that dynamically allocates
                // a specificed number of bytes in memory 
    

    int number = 0; 
    printf("Enter the number of grades: "); 
    scanf("%d", &number); 

    char* grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory allocation failed!"); 
        return 1; 
    }

    for(int i = 0; i< number; i++){
        printf("Enter grade #%d: ", i + 1); 
        scanf(" %c", &grades[i]); 
    }

    for(int i = 0; i< number; i++){
        printf("%c ", grades[i]); 
    }

    free(grades);  // returning rented space back to OS 
    grades = NULL; // need to get rid of pointer after done
    //avoid dangling pointer

    //when done renting apartment you must return the apartment and the key



    return 0; 
}