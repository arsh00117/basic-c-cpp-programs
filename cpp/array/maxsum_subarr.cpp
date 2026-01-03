#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n = 7;
    int array[7] = {3,-4,5,4,-1,7,-8};
    
    int maxSum = INT_MIN;

    for(int strt=0;strt<n;strt++) {
        int currSum = 0;
        for(int end=strt;end<n;end++) {
            currSum += array[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"Maximum sum of subarray is : "<<maxSum<<endl;
    return 0;
}
