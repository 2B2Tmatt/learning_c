#include <stdio.h> 

int main(){
    //break breaks out of the loop
    //continue will skip the current cycle 
    for(int i = 1; i <=10; i++){
        if(i==4){
            continue; 
        }
        printf("%d\n", i); 
        
    }
}