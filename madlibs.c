#include <stdio.h>
#include <string.h> 

int main(void){

    char noun[30] = ""; 
    char verb[30] = ""; 
    char adjective1[30] = ""; 
    char adjective2[30] = ""; 
    char adjective3[50] = ""; 

    printf("Enter an adjective (description): "); 
    fgets(adjective1, sizeof(adjective1), stdin); 
    // to remove next line input buffer 
    adjective1[strlen(adjective1)-1] = '\0';
    

    printf("Enter a noun (animal or person): "); 
    fgets(noun, sizeof(noun), stdin); 
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin); 
    adjective2[strlen(adjective2)-1] = '\0';

    printf("Enter a verb (ending w/ - ing): "); 
    fgets(verb, sizeof(verb), stdin); 
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective (description): "); 
    fgets(adjective3, sizeof(adjective3), stdin); 
    adjective3[strlen(adjective3)-1] = '\0';

    printf("I saw a(n) %s %s today. ", adjective1, noun);
    printf("%s's hat was particularly unusual and %s.\n", noun,  adjective2);
    printf("His countenance had a(n) %s feel as if he were %s", adjective3, verb);
   

    return 0; 
}