#include <iostream>
using namespace std;

int min(int a, int b) {
    int o;
    if(a>b) {
        o = b;
    } else {
        o = a;
    }
    return o;
}

int main() {
    int a,b;

    cout<<"****To Calculate min of 2 number****"<<endl;
    cout<<"Enter Number 1: ";
    cin>>a;

    cout<<"Enter Number 2: ";
    cin>>b;

    int o =min(a,b);
    cout<<endl<<"Minimum is:  "<<o<<endl;
    return 0;
}