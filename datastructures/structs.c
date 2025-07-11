#include <stdio.h> 
#include <string.h> 
#include <stdbool.h>
//outside of main def
typedef struct{
    char name[50]; 
    int age; 
    float gpa; 
    bool isFullTime; 
}Student;

void printStudent(Student student); 

int main(){
    // struct = custom container that holds multiple
    // pieces of related information
    //simlar to objects in other langauges


     Student student1 = {"Spongebob",30, 2.5, true};
     Student student2 = {"Patrick", 36, 1.0, false}; 
     Student student3 = {"Squidward", 48, 3.2, false}; 
     Student student4 = {0}; //if you declare a struct you need to clear out left over memory

    strcpy(student4.name, "Sandy"); //string copy
    student4.age = 27; 
    student4.gpa = 4.0;

     printf("%s\n", student2.name); 
     printf("%d\n", student4.age); 
     printf("%.2f\n", student4.gpa); 
     printf("%s\n", (student2.isFullTime) ? "Yes" : "No");
     
     
     printStudent(student1); 

    return 0; 
}

void printStudent(Student student){
    printf("%s\n", student.name); 
    printf("%d\n", student.age); 
    printf("%.2f\n", student.gpa); 
    printf("%s\n", (student.isFullTime) ? "Yes" : "No"); 
    printf("\n");


}