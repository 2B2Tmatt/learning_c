#include <stdio.h> 


//outside main function
typedef enum {
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status); 
int main(){
    // enum = A user-defined data type that consists
    // of a set of named integer constant. 
    // Benefit: Replaces numbers with readable names

    //SuNDAY = 0; 

    Status status = SUCCESS; 
    connectStatus(status); 

    return 0; 
}

void connectStatus(Status status){
    switch(status){
        case SUCCESS: 
            printf("Connection was successfull\n"); 
            break;
        case FAILURE: 
            printf("Could not connect\n"); 
            break;
        case PENDING: 
            printf("Connecting...\n");
    }
}