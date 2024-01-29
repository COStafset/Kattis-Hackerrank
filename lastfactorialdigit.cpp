#include <iostream>

using namespace std;

int main()
{
    int N;
    
    cin >> N;

    long long *arr = new long long[N];
    
    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        long long factorial = 1;
        while (num > 0) {
            factorial *= num;
            num--;
        }
        factorial = factorial % 10;
        arr[i] = factorial;
    }
    
    for(int j=0; j<N; j++) {
        cout << arr[j] << endl;
    }
    return 0;
}