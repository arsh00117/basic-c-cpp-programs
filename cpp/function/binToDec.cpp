#include <iostream>
using namespace std;


int binToDec(int binNum) {
    int pow = 1,ans = 0;
    while(binNum>0) {
        int rem =binNum%10;
        ans += (rem*pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    int binNum;
    
    cout<<"Binary to Decimal Conversion"<<endl<<endl;
    
    cout<<"Enter Binary Number: ";
    cin>>binNum;
    
    cout<<"The Decimal of "<<binNum<<" is "<<binToDec(binNum);
    
   return 0; 
}
