#include <stdio.h> 
#include <stdbool.h> 

// ternary operator ? = shorthand for if-else statements
// (condition) ? value_if_true: value_if_false; 

int main(){


    int hours = 12; 
    int minutes = 30; 

    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "AM" : "PM"); 


    return 0; 
}