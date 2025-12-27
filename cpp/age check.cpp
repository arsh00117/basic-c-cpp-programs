#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout<<"****To check age (ADULT/MINOR)****"<<"\n"<<endl;
    cout<<"Enter Age:.";
    cin>>age;
    
    if (age>=18) {
        cout<<"The person is Adult";
    } else {
        cout<<"The person is Minor";
    }
    return 0;
}
