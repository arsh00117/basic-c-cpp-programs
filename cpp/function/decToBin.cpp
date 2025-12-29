#include <iostream>
using namespace std;


int decToBin(int num) {
    int pow = 1,ans = 0;
    while(num>0) {
        int rim = num%2;
        num = num/2;
        ans+=(rim*pow);
        pow = pow*10;
    }
    return ans;
}

int main() {
    int num;
    
    cout<<"Decimal to Binary Conversion"<<endl<<endl;
    
    cout<<"Enter Decimal Number: ";
    cin>>num;
    
    cout<<"The Binary of "<<num<<" is "<<decToBin(num);
    
   return 0; 
}
