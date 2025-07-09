#include <stdio.h> 

int main(){
    //2D array = An array where each element is an array 
    // array[][] = {{},{},{}}
    //must declare number of columns
    int numbers[][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9},
                        {10, 11, 12},
                        {13, 14, 15}}; 
   
    //printf("%d\n", sizeof(numbers));
    //printf("%d", sizeof(numbers[0]));
    //printf("\n%d", sizeof(numbers[0][0]));
    for(int i = 0; i<sizeof(numbers)/sizeof(numbers[0]); i++){
        for(int j = 0; j<sizeof(numbers[0])/sizeof(numbers[0][0]); j++){
            printf("%3d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0; 
}