#include <stdio.h> 

//needs to be outside function
typedef int Number; 
typedef char String[50]; 
typedef char Initials[3]; //2 + 1 for null terminator

int main(){

    // typedef = reserved keyword that gives existing datatype a "nickname" 
    // helps simplify complex types and improves code readbility
    // typedef existing_type new_name; 
    Initials user1 = "MG"; 
    Initials user2 = "SC"; 
    Initials user3 = "EG"; 
    
    String name = "Matt"; 
    printf("%s\n", name);
    printf("%s", user1); 

    return 0; 
}