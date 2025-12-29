#include <iostream>
using namespace std;

int sum(int a, int b) {
    int s = a+b;
    return s;
}

int main() {
    int a,b;

    cout<<"****To Calculate 2 number using Function****"<<endl;
    cout<<"Enter Number 1: ";
    cin>>a;

    cout<<"Enter Number 2: ";
    cin>>b;

    int s = sum(a,b);
    cout<<endl<<"Sum of "<<a<<" and "<<b<<" is: "<<s<<endl;
    return 0;
}
