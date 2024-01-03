#include <iostream>
using namespace std;

int main() {
    int n, c1, c2, c3;
    
    cin>> n;
    while(n--) {
        cin>>c1>>c2>>c3;
        if(c1>c2-c3) {
            cout<<"do not advertise"<<endl;
        }
        else if(c1 == c2-c3) {
            cout<<"does not matter"<<endl;
        }
        else {
            cout<<"advertise"<<endl;
        }
    }
    return 0;
}