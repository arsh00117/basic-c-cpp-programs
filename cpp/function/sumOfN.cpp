#include <iostream>
using namespace std;

int sumOfN(int n) {
    int s = 0;
    for(int i=1;i<=n;i++){
       s= s+i;
    }
    return s;
}

int main() {
    int a;
    
    cout<<"****To Calculate Sum of N****"<<endl;
    cout<<"Enter Number N : ";
    cin>>a;
    
    cout<<"Sum Of N numbers are: "<<sumOfN(a)<<".";
    return 0;
}
