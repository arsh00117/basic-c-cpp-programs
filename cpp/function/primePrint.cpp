#include <iostream>
using namespace std;

void primePrint(int n) {
    for (int i = 2; i <= n; i++) {
        int rst = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                rst = 0;
                break;
            }
        }

        if (rst == 1) {
            cout << i << " ";
        }
    }
}
int main() {
    int n =50;
    
    cout<<"Print Prime numbers till "<<n<<endl<<endl;
    primePrint(n);

    return 0;
}
