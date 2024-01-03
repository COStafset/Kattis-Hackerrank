#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int cool = 0;
    
    cin>>s;
    cool = s.length() - 2;
    while(cool--) {
    s.insert(1, "e");
    }

    cout<< s << endl;
    return 0;
}