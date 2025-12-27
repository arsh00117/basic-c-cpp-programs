#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout<<"****To check (ODD/EVEN)****"<<"\n"<<endl;
    cout<<"Enter Number:.";
    cin>>n;
    
    if (n%2==0) {
        cout<<"The Number "<<n<<" is Even."<<endl;
    } else {
        cout<<"The Number "<<n<<" is Odd."<<endl;
    }
    return 0;
}
