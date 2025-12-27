#include <stdio.h>  //header files

float principle,rate,time,si;   //variables declaration

int main() {                    //main function
    
    printf("Enter principle :. ");  //entering principle
    scanf("%f",&principle);
    printf("Enter Rate :. ");       //entering rate
    scanf("%f",&rate);
    printf("Enter time :. ");       //entering time in year
    scanf("%f",&time);
    
    si = (principle*rate*time)/100; //formula for calculation
  
    printf("***************\n");
    printf("TOTAL INTREST: %.2f\n",si);
    printf("***************");
    return 0;
}
