#include <stdio.h>  

int main() {              

    int a , b;

    printf("****To compare 2 numbers****\n");
    printf("Enter a number 1 :. ");   
    scanf("%i",&a);
    
    printf("Enter a number 2 :. ");   
    scanf("%i",&b);
    
    if (a==b) {     
        printf("Number %i is Equal to %i.",a,b);
    } else if(a>b) {
        printf("Number %i is Greater than %i",a,b);
    } else {
        printf("Number %i is smaller than %i.",a,b);
    }
    return 0;
}
