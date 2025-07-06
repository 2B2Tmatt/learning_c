#include <stdio.h>
#include <string.h> 

int main(void){

    char noun[30] = ""; 
    char verb[30] = ""; 
    char adjective1[30] = ""; 
    char adjective2[30] = ""; 
    char adjective3[50] = ""; 

    printf("Enter an adjetive (description): "); 
    fgets(adjective1, sizeof(adjective1), stdin); 

    printf("Enter a noun (animal or person): "); 
    fgets(noun, sizeof(noun), stdin); 

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin); 

    printf("Enter a verb (ending w/ - ing): "); 
    fgets(verb, sizeof(verb), stdin); 

    printf("Enter an adjective (description): "); 
    fgets(adjective3, sizeof(adjective3), stdin); 

    printf("%s", adjective1);
    printf("%s", adjective2);
    printf("%s", adjective3);
    printf("%s", noun);
    printf("%s", verb); 

    return 0; 
}