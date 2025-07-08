#include <stdio.h> 

int result = 0; 
//global scope(hard to debug) 

int add(int x, int y){
    int result = x + y; 
    return result; 
}

int subtract(int x, int y ){
    int result = x- y; 
    return result; 
}

int main(){
    //var in same scope can not have same name
    //functions cant see into other functions
    int x = 5; 
    int y = 6; 
    int result = subtract(x, y); 
    printf("%d", result); 

    return 0; 
}