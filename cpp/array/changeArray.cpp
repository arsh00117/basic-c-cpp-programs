#include <iostream>
using namespace std;

void changeArray(int ary[],int size){
    for(int i=0;i<size;i++) {
        ary[i] = 2*ary[i];
    }
}

int main() {
    int array[] = {1,2,3};
    int size = 3;
    
    changeArray(array,size);
    
    
    for(int i=0;i<size;i++) {
        cout<<array[i]<<endl;
    }
    
    return 0;
}
