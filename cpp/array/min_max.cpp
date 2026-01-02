#include <iostream>
#include <climits>


using namespace std;

int main() {
    int num[]={2,6,22,45,23,-15};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0;i<size;i++) {
        smallest = min(num[i],smallest);
    }
    for(int i = 0;i<size;i++) {
        largest = max(num[i],largest);
    }
    cout<<"Smallest : "<<smallest<<endl;
    cout<<"Largest : "<<largest<<endl;
    return 0;
    
}
