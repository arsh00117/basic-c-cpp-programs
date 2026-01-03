#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int array[5] = {4,1,2,1,2};
    
    for(int strt=0;strt<n;strt++) {
        for(int end=strt;end<n;end++) {
            for(int i=end;i<=end;i++) {
                cout<<array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
