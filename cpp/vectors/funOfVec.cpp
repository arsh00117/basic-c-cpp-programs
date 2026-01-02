#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vec;
    
    vec.push_back(25);
    vec.push_back(36);
    vec.push_back(11);

    vec.pop_back();     //last value deleted

    for(int value : vec) { 
        cout<<value<<" ";
    } 
    cout<<endl;
    cout<<"Front value: "<<vec.front()<<endl;
    cout<<"Back value: "<<vec.back()<<endl;

    return 0;
}
