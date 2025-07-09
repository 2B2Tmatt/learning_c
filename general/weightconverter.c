#include <stdio.h> 

int main(void){

    int choice = 0; 
    float pounds = 0.0f; 
    float kilograms = 0.0f; 

    printf("Weight Conversion Calculator\n"); 
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilgrams\n"); 
    printf("Enter your choice (1 or 2): "); 
    scanf("%d", &choice); 

    if(choice == 1){
        //kg to lb 
        printf("Enter the weight in kilograms: \n"); 
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462; 
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds); 
    }

    else if(choice == 2){
        //lb to kg
        printf("enter the weight in pounds: \n");
        scanf("%f", &pounds); 
        kilograms = pounds/2.20462; 
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms); 
        
    }

    else{
        //not valid
        printf("Invalid choice! Please enter 1 or 2\n"); 
    }

    return 0 ; 
}