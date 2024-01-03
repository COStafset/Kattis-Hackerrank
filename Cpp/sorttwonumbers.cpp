#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int r1, r2;
    cin >> r1 >> r2;
    
    if(r1 > r2) {
        cout << r2 << " " << r1;
    }
    else {
        cout << r1 << " " << r2;
    }
}