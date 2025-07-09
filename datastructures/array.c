#include <stdio.h> 

int main(){
    // array = A fixed-size collection of elements of the same data type
    //similar to variable but holds more than 1 value 

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; 

    printf("%d\n", sizeof(numbers));  //prints size in bytes
    printf("%d\n", sizeof(numbers[0]));  //prints size of first element in bytes. Can use to div array/element for # array elements
    int size = sizeof(numbers)/sizeof(numbers[0]); 
    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]); 
    }
   
    //numbers[0] = 100; 
    //numbers[1] = 90; 
    //printf("%d", numbers[0]); 
    //printf("\n%d", numbers[1]); 
    //printf("%c", grades[4]);
    return 0; 
}