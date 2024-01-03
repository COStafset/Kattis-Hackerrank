#include <iostream>
using namespace std;

int main() {
    int n, current, total = 0;
    cin>>n;
    if (n>1) {
    total = -n+1;
    }
    while(n--){
        cin>>current;
        total += current;
    }
    cout<<total;;
}