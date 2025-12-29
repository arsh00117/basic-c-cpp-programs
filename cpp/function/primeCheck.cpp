#include <iostream>
using namespace std;

int primeCheck(int n) {
    int flag = 1;
    for (int i = 2; i<n;i++) {
        int result = n%i;
        if (result == 0 ){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int n = 78;
    int result = primeCheck(n);
    if (result !=0) {
        cout<<n<<" is a Prime number";
    } else {
        cout<<n<<" is not a Prime Number";
    }
    return 0;
}
