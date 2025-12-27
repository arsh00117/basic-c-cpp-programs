#include <stdio.h>  //header files

int main() {                    //main function

    int n,i;
    int f=1;                   
    
    printf("****To Check Factorial****\n\n");
    
    printf("Enter the number:. ");
    scanf("%i",&n);
    
    for(i=1;i<=n;i++){
        f = f*i;
    }
    printf("The Factorial of %i is %i.",n,f);
    
    return 0;
}
