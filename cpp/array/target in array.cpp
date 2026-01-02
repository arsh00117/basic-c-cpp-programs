#include <iostream>
using namespace std;

int targetArr(int arr[],int size,int target) {
    
    for(int i=0;i<size;i++) {
        if(arr[i]==target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int array[] = {4,2,7,8,1,2,5};
    int size = 8;
    
    cout<<targetArr(array, size,5);
    
    return 0;
}
