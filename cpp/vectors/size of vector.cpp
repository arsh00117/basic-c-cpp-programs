#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> vec = {'a','b','c','b'};
    cout<<"size = "<<vec.size()<<endl;

    for(char value : vec) { 
        cout<<value<<" ";
    } 

    return 0;
}
