#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, rot = 0, cinder = 1;
    cin>>n;
    while (n>=0) {
    n = n - pow(cinder, 2);
    rot++;
    cinder = cinder + 2;
    }
    
    cout<<rot-1<<endl;
    return 0;
}