#include <stdio.h> 
int main(){
    //standard struc FILE through stdio.h
    // arguments:  path(abs or rel), write/read mode
    FILE* pFile = fopen("output.txt", "w"); 
    // pointers == null if file can't be accessed
    char text[] = "BOOTY BOOTY BOOTY\nBOOO!";
    if(pFile == NULL){
        printf("Error opening file\n"); 
        return 1; 
    }
    // three arguments: pointer to file, f-specifier, text
    fprintf(pFile, "%s", text); 
    printf("File was written succesfully!\n"); 

    fclose(pFile); //you want to close files after 


    return 0; 
}