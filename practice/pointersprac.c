#include <stdio.h>
#include <stdlib.h> 



void swapTwoInts(int *p1, int *p2);
void square(int *p1);

int main(){
    //declare and assign a pointer to an int, 
    //char and float
    int x = 1; 
    int *pX = &x; 
    printf("This is the memory address of x: %p\n", pX); 
    printf("This is x: %d\n\n", *pX); //dereferences to access actual value at memory *pX. 

    char first_initial = 'M'; 
    char *pI = &first_initial; 
    printf("This is the memory address of my initial: %p\n", pI); 
    printf("This is my initial: %c\n\n", *pI);

    float gpa = 3.4; 
    float *pGpa = &gpa; 
    printf("This is the memory address of my gpa: %p\n", pGpa); 
    printf("This is my gpa: %.2f\n\n", *pGpa);

    //Pointer arithmetic
    //Create an array and use a pointer to access elements (*(ptr + i))
    //Traverse an array with a pointer instead of indices
    int ages[] = {5, 2, 6, 1, 3};
    int *pAges = ages; // ages = &ages[0], arrays decay into pointers
    printf("This is the first age in the array: %d\n", *pAges); 
    printf("This is the third age in the array: %d\n", *(pAges+2)); 
    printf("This is the fifth age in the array: %d\n\n", *(pAges+4)); 
    int sizeAges = sizeof(ages)/sizeof(ages[0]); 
    printf("Now using pointer loops: ");
    for(int i = 0; i< sizeAges; i++){
        printf("%d ", *(pAges+i)); 
    }


    //Pass by reference
//Write a function to swap two integers using pointers
//Write a function to square a number via pointer argument
    int x1 = 5552; 
    int x2 = 9387; 
    int *pX1 = &x1; 
    int *pX2 = &x2; 
    printf("\n\nBefore swap: %d %d", *pX1, *pX2); 
    swapTwoInts(pX1, pX2); 
    printf("\nAfter swap: %d %d\n\n", *pX1, *pX2); 
    int y = 3; 
    int *pY = &y; 
    square(pY); 
    printf("squared is %d", y);

    return 0; 
}


void swapTwoInts(int *p1, int *p2){
    int temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 
}


void square(int *p1){
    *p1 = *(p1) * *(p1); 
}