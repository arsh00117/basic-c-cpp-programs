#include <stdio.h> 

int main() {                  

    
    float principle,rate,time,si;   

    printf("****Program to calculate simple interest****");
    printf("Enter principle :. ");  
    scanf("%f",&principle);
    
    printf("Enter Rate :. ");     
    scanf("%f",&rate);
    
    printf("Enter time :. ");     
    scanf("%f",&time);
    
    si = (principle*rate*time)/100; 
  
    printf("***************\n");
    printf("TOTAL INTREST: %.2f\n",si);
    printf("***************");
    
    return 0;
}
