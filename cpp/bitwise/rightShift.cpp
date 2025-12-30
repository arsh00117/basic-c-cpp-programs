#include <iostream>

using namespace std;

int rightShift(int n,int i) {
    int result = (n<<i);        //formula used
    return result;              //result
}

int main() {
    int n;
    int i;
    cout<<"Right Shifting (Bitwise) Program in C++"<<endl<<endl;
    
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Enter i: ";
    cin>>i;
    
    cout<<"Right Shifting : "<<n<<"<<"<<i<<" : "<<rightShift(n,i)<<endl;
    
    return 0;
}
