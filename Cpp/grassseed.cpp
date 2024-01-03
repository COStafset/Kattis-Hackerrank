#include <iostream>
using namespace std;

int main() {
    int lawns;
    double ion, cost, itw, total;
    
    
    cin>>cost >> lawns;
    while(lawns--) {
        cin>>ion>>itw;
        total += ion*itw*cost;
    }
    cout.precision(10);
    cout<<total;
    return 0;
}