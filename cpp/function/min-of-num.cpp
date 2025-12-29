#include <iostream>
using namespace std;

int minOfTwo(int a, int b) {
    if(a>b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int a,b;

    cout<<"****To Calculate min of 2 number****"<<endl;
    cout<<"Enter Number 1: ";
    cin>>a;

    cout<<"Enter Number 2: ";
    cin>>b;

    cout<<endl<<"Minimum is:  "<<minOfTwo(a,b)<<endl;
    return 0;
}
