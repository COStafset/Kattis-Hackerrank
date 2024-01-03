#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    string key, code, result;
    getline(cin, key);
    getline(cin, code);
    int len = code.length();
    int j = 0;
    for(int i=0; i<len; i+=3) {
        string sub = code.substr(i, 3);
        int add = stoi(sub)-1;
        result += key[add];
    }
    cout << result;
}