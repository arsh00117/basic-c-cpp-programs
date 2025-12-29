#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digiSum = 0;
    
    while(num>0) {
        int lastDig = num%10;
        num = num/10;
        digiSum +=lastDig;
    }
    
    return digiSum;
}

int main() {
    int n;
    
    cout<<"****SUM OF DIGITS****"<<endl<<endl;
    
    cout<<"Enter Digits: ";
    cin>>n;
    
    cout<<"Sum is : "<<sumOfDigits(n)<<endl;
    
    return 0;
}
