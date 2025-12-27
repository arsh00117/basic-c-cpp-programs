#include <stdio.h>           

int main() {                   

    int n,i;                    
    int p = 0;                  
    int np = 0;

    printf("To check the number is Prime or not\n");
    printf("Enter a number to check:. "); 
    scanf("%i",&n);
    
    for(i=2;i<=n-1;i++) {      
        if(n%i==0) {
            np = 1;
            break;             
        } else {
            p = 1;
        }
    }
    if(np==1) {
            printf("The number %i is not prime number.",n);
        } else {
            printf("The number %i is prime number.",n);
        }
    return 0;
}
