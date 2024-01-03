#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, out;
    cin>>s;
    for(int i=0; i< s.length(); i++) {
        if(isupper(s[i])) {
            cout<<s[i];
        }
    }
    return 0;
}