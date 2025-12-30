#include <iostream>
using namespace std;

int leftShift(int n,int i) {
    int result = (n>>i);        //formula used
    return result;              //result
}

int main() {
    int n;
    int i;
    cout<<"Left Shifting (Bitwise) Program in C++"<<endl<<endl;
    
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Enter i: ";
    cin>>i;
    
    cout<<"Left Shifting : "<<n<<">>"<<i<<" : "<<leftShift(n,i)<<endl;
    
    return 0;
}
