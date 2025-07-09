#include <stdio.h> 

int main(){
    // you need to set the size of an uninitialized array 
    int scores[5] = {0};
    
    for(int i = 0; i< sizeof(scores)/sizeof(scores[0]); i++){
        printf("Enter a score: "); 
        scanf("%d", &scores[i]); 
    }
    for(int i = 0; i< sizeof(scores)/sizeof(scores[0]); i++){
        printf("%d\n", scores[i]);
    }

    return 0; 
}