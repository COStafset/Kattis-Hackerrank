#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin>>a;
    
    if(a.rfind("555", 0) == 0) {
    cout<<1<<endl;
    }
    else {
    cout<<0<<endl;
    }
    
    return 0;
}