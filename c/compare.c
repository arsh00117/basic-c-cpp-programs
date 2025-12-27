#include <stdio.h>  //header files

int main() {                    //main function

    int a , b;
    
    printf("Enter a number 1 :. ");   //entering first number
    scanf("%i",&a);
    
    printf("Enter a number 2 :. ");   //entering second number
    scanf("%i",&b);
    
    if (a==b) {     //check both number nested if
        printf("Number %i is Equal to %i.",a,b);
    } else if(a>b) {
        printf("Number %i is Greater than %i",a,b);
    } else {
        printf("Number %i is smaller than %i.",a,b);
    }
    return 0;
}
