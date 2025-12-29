#include <iostream>
using namespace std;

int main() {
    
    int n = 4;
    int i,j,z;
    for(int i = 0;i<n;i++) {
        for(j = 0;j<(n-i-1);j++) {
            cout<<" ";
        }
        cout<<"*";
        for(z =0;z<(2*i-1);z++) {
            cout<<" ";
            }
        if(z!=0) {
            
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0;i<(n-1);i++) {
        for(int j = 0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        
        if(i!=n-2) {
            for(z =0;z<2*(n-i)-5;z++) {
            cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}