#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, w, h, curr;
    
    cin>>n>>w>>h;
    double max = pow(w, 2) + pow(h, 2);
    max = sqrt(max);
    while(n--) {
        cin>>curr;
        if(curr<=max) {
            cout<<"DA"<<endl;
        }
        else {
        cout<<"NE"<<endl;
        }
    }
    return 0;
}