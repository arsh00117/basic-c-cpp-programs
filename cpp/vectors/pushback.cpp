#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <char> vec;
    cout<<"size = "<<vec.size()<<endl;
    
    vec.push_back(25);
    vec.push_back(36);
    vec.push_back(11);
    cout<<"size after push back = "<<vec.size()<<endl;

    for(int value : vec) { 
        cout<<value<<" ";
    } 
    cout<<endl;

    return 0;
}
