#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<bool> v;
    v.resize(11, true);
    int n;
    
    while(cin>>n && n != 0) {
        string trash, value;
        cin>>trash>>value;
        
        if(value=="low") {
            for(int i =0; i<=n; i++) {
                v[i] = false;
            }
        }
        else if(value == "high") {
            for(int i = n; i<=10; i++) {
                v[i] = false;
            }
        }
        else {
            if(v[n]) {
                cout<<"Stan may be honest"<<endl;
            }
            else {
                cout<<"Stan is dishonest"<<endl;
            }
            v.clear();
            v.resize(11, true);
        }
    }
}