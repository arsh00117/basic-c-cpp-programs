#include <iostream>
using namespace std;

int sumArr(int arr[],int size) {
    int sum = 0;
    for(int i=0;i<size;i++) {
        sum = sum+arr[i];
    }
    return sum;
}

int prArr(int arr[],int size) {
    int prod = 1;
    for(int i=0;i<size;i++) {
        prod = prod*arr[i];
    }
    return prod;
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    cout<<"***Sum and Product of Array***"<<endl<<endl;
    cout<<"Array ["<<size<<"]"<<" = [ ";
    
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    
    cout<<"Sum : "<<sumArr(arr,size)<<endl;
    cout<<"Product : "<<prArr(arr,size)<<endl;
    
    return 0;
}
