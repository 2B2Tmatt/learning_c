#include <stdio.h> 

int main(){
    int rows = 0; 
    int columns = 0; 
    char symbol = '\0'; 

    printf("Enter the # of rows: "); 
    scanf("%d", &rows);
    printf("Enter the # of columns: "); 
    scanf("%d", &columns); 
    printf("Enter the symbol you would like to use: "); 
    scanf(" %c", &symbol); 

    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
}