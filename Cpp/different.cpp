#include <iostream>
using namespace std;

int main () {
    long long one, two;
    
    while(cin>>one>>two) {
        cout<<abs(two-one)<<endl;
    }
    return 0;
}