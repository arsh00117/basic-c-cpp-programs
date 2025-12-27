#include <stdio.h>              //header files

int main() {                    //main function

    int n,i;                    //variables declaration
    int p = 0;                  //default values
    int np = 0;

    printf("To check the number is Prime or not\n");
    printf("Enter a number to check:. ");   //entering number
    scanf("%i",&n);
    
    for(i=2;i<=n-1;i++) {      //loop starts to check its prime or not
        if(n%i==0) {
            np = 1;
            break;             // pauses if its not prime
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
