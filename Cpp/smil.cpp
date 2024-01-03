#include <iostream>
using namespace std;

int main() {
 
    string s;
    cin >> s;
    bool eyes = false;
    
    for(int i = 0; i<s.length(); i++) {
        if(s[i] == ':' || s[i] == ';') {
            if(s[i+1] == ')') {
                cout<<i<<endl;
            }
        else if(s[i+1] == '-') {
            if(s[i+2] == ')') {
                cout<<i<<endl;
            }
        }
        }
    }
    return 0;
}