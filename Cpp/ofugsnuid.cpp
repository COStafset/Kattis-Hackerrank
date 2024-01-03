#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin>>n;
    int cool = n;
    int arr[n];
    while(n--) {
        cin>>t;
        arr[n] = t;
    }

    for (int i = 0; i<cool; i++) {
    cout<<arr[i]<<endl;
    }
    return 0;
}