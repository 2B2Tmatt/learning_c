#include <stdio.h>

double cube(double num){
    return num* num * num; 
}
double square(double num){
    return num * num; 
}

int main(){
    
    double x = 0; 
    double y = 0; 
    double z = 0; 
    printf("Enter the first number: ");
    scanf("%lf", &x); 
    printf("Enter a second number: "); 
    scanf("%lf", &y);
    printf("Enter a third number: "); 
    scanf("%lf", &z);
    x = square(x); 
    y = square(y); 
    z = cube(z); 


    printf("%.2lf\n", x); 
    printf("%.2lf\n", y); 
    printf("%.2lf\n", z); 
}