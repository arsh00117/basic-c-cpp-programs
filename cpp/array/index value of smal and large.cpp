#include <iostream>
#include <climits>


using namespace std;

int main() {
    int num[]={5,26,-8,56,-2,44};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int sml = 0;
    int lrg = 0;
    
    for(int i = 0;i<size;i++) {
        if(num[i]<smallest) {
            smallest = num[i];
            sml = i;
        }
        if(num[i]>largest) {
            largest = num[i];
            lrg = i;
        }
    }
    cout<<"Smallest : "<<smallest<<" at " <<sml<<endl;
    cout<<"Largest : "<<largest<<" at "<<lrg<<endl;
    return 0;
    
}
