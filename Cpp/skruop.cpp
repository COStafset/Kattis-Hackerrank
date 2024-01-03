#include <iostream>
using namespace std;

int main() {
    int n, volume=7;
    string s,s1;
    cin>>n;
    for(int i=0; i<n;i++) {
        cin>>s>>s1;
        if(s1 == "op!") {
            if(volume<10) {
                volume++;
            }
        }
        else {
            if(volume>0) { 
            volume--;
            }
        }
    }
    cout<<volume;
    return 0;
}