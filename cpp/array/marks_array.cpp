#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size] = {99,78,68,99,87};
    
    cout<<"****Array of Marks****"<<endl<<endl;
    for(int i = 0;i<size;i++) {
        cout<<"Marks of Student "<<(i+1)<<" is "<<marks[i]<<endl;
    }
    return 0;
    
}
