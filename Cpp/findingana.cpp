#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int len;
    cin>>s;
    len = s.length();
    
    for (int i = 0; i < len; i++) {
        if (s[i] == 'a') {
            string sub = s.substr(i, len-i);
            cout << sub <<endl;
            
            return 0;
        }
    }
}