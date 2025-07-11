#include <stdio.h> 



void birthday(int* age); 
int main(){
    // pointer = variable that stores the memory address of another variable. 
    // they help avoid wasting memeory by allowing you to pass the 
    // address of large data structure instead of copying the entire data

    int age = 25;  
    int *pAge =&age; 
    //* = dereference operator

    //printf("%p\n", &age);   //%p used to print pointer address
    //printf("%p\n", pAge); // same address

    birthday(pAge); 
    printf("You are %d years old", age); 


    return 0; 
}

void birthday(int* age){
    // pass by reference
    (*age)++;
}