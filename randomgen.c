#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main(){

    int min = 1; 
    int max = 6; 
    
    srand(time(NULL)); 
    int randomNum = (rand()%(max-min +1))+min; //random formula 
    printf("%d", randomNum); 

    return 0; 
}