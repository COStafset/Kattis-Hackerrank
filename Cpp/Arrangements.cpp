#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int leftover = m%n;    // find the leftover with mod
    int avg = (m - leftover)/n; // average for each room
    
    for(int i=0; i<n; ++i) {
        int temp = avg;
        if(leftover>0) {   // adds a leftover to each room if possible
            temp++;
            leftover--;
        }
        for(int j=0; j<temp; ++j) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
