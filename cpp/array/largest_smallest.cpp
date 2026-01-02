#include <iostream>
#include <climits>


using namespace std;

int main() {
    int num[]={2,6,22,-45,23,-15};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0;i<size;i++) {
        if(num[i]<smallest) {
            smallest = num[i];
        }
        if(num[i]>largest) {
            largest = num[i];
        }
    }
    cout<<"Smallest : "<<smallest<<endl;
    cout<<"Largest : "<<largest<<endl;
    return 0;
    
}
