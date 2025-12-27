#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout<<"****To check (UPR/LWR)****"<<"\n"<<endl;
    cout<<"Enter Alphabet:.";
    cin>>ch;
    
    if (ch>='a'&& ch<='z') {
        cout<<"The Alphabet "<<ch<<" is Lowercase."<<endl;
    } else {
        cout<<"The Alphabet "<<ch<<" is Uppercase."<<endl;
    }
    return 0;
}
