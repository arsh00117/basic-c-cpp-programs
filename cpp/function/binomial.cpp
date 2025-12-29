#include <iostream>
using namespace std;

int facto(int n) {
    int o = 1;
    for(int i = 1;i <= n;i++) {
        o=o*i;
    }
    return o;
}

int nCr(int n,int r) {
    int factn = facto(n);
    int factr = facto(r);
    int factd = facto(n-r);
    
    int t = factn/(factr*factd);
    return t;
}
int main() {
    int n,r;
    
    
    cout<<"Calculate Binomonial Coefficients nCr"<<endl<<endl;
    
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"Enter r: ";
    cin>>r;
    
    int o = nCr(n,r);
    
    cout<<n<<"C"<<r<<" is: "<<o<<"."<<endl;
    return 0;
}
