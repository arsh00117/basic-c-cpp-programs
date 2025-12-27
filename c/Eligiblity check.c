#include <stdio.h> 

int main() {                    

    int age;
    
    printf("Program to check Person is eligible.\n");
    printf("****For a driving license****\n\n");
    
    printf("Enter the age of person :. ");   
    scanf("%i",&age);
    
    if (age>=18) {
        printf("Congratulation, You are eligible. ");
    } else {
        printf("You are not eligible.");
    }
    return 0;
}
