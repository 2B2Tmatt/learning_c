#include <stdio.h> 
#include <math.h> 

int main(){
    double radius = 0.0; 
    double area = 0.0;
    double surfaceArea = 0.0; 
    const double PI = 3.14159; 
    double volume = 0.0; 

    printf("Enter the radius: "); 
    scanf("%lf", &radius);

    area = PI * pow(radius, 2); 
    printf("Area: %.2lf", area); 

    surfaceArea = 4 * PI * pow(radius, 2); 
    printf("\nSurface Area: %.2lf", surfaceArea); 

    volume = (4.0/3.0) * PI * pow(radius, 3); 
    printf("\nVolume: %.2lf", volume); 


    return 0; 
}