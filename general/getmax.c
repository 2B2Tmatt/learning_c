#include <stdio.h>  


int getMax(int x, int y){
    if(x >= y){
        return x; 
    }
    else{
        return y; 
    }
}
int main(){

    int num1 = 0; 
    int num2 = 0; 
    
    printf("Enter your first number: "); 
    scanf("%d", &num1);
    printf("Enter your second number: "); 
    scanf("%d", &num2); 
    int max = getMax(num1, num2); 
    printf("The largest number is %d", max); 
    return 0; 
}