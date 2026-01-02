#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int s ,l;
    for(int i=0;i<size;i++) {
        if(arr[i]<smallest) {
            smallest = arr[i];
            s = i;
        }
        if(arr[i]>largest) {
            largest = arr[i];
            l = i;
        }
    }
    
    swap(arr[s],arr[l]);
    cout<<"[";
    for(int i=0;i<size;i++) {
        cout<<arr[i];
        if(i!=(size-1)) {
            cout<<",";
        }
    }
    cout<<"]";
    
    
    return 0;
}
