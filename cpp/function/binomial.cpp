#include <iostream>
using namespace std;

long long facto(int n) {
    long o = 1;
    for(int i = 1;i <= n;i++) {
        o=o*i;
    }
    return o;
}

long long nCr(int n,int r) {
    long long factn = facto(n);
    long long factr = facto(r);
    long long factd = facto(n-r);
    
    long long t = factn/(factr*factd);
    return t;
}
int main() {
    long long n,r;
    
    
    cout<<"Calculate Binomonial Coefficients nCr"<<endl<<endl;
    
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Enter r: ";
    cin>>r;
    
    long long o = nCr(n,r);
    
    cout<<n<<"C"<<r<<" is: "<<o<<"."<<endl;
    return 0;
}
