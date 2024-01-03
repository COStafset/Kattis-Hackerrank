#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, total = 0, min, count=0;
    cin>>n;
    int foo[n];
    bool survivor = 0;
   
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        foo[i] = a;
    }
    int n1 = sizeof(foo)/sizeof(foo[0]);
    sort(foo, foo+n1);
    
    for (int j=0; j<n; j++) {
    if (survivor == false) {
    min = foo[j];
    }
    survivor = false;
    
        if (foo[j+1] == foo[j]+1) {
            survivor = true;
            count++;
        }
        else {
            
        total += foo[j-count];
        count=0;
        survivor = false;
        }
        
    }
    
    cout<<total<<endl;
    return 0;
}