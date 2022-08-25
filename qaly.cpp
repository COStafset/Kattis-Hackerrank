#include <iostream>
using namespace std;

int main() {
    
    int n;
    float life;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float q, y;
        cin >> q >> y;
        life += q*y;
    }
    
    cout << life;
    return 0;
}
