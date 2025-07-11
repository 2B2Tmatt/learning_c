#include <stdio.h> 

int main(){
    // read a file 
    FILE* pFile = fopen("input.txt", "r"); 
    // need buffer to temp store data, 1024bytes = 1kb 
    char buffer[1024] = {0};

    if(pFile== NULL){
        printf("Could not open file\n"); 
        return 1; 
    }

    while(fgets(buffer, sizeof(buffer), pFile)!= NULL){
        printf("%s", buffer); 
    }

    fclose(pFile); 
    return 0; 
}