#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 7;
    int array[7] = {3,-4,5,4,-1,7,-8};
    int sum = 0;

    for(int strt=0;strt<n;strt++) {
        for(int end=strt;end<n;end++) {
            sum += array[end];
        }
    }
    cout<<"sum of subarray is : "<<sum<<endl;
    return 0;
}
