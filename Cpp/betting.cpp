#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, high, low;
    cin>>n;
    low = 100/n;
    high = 1/(1-(n/100));
    
    std::cout << std::fixed;
    std::cout << std::setprecision(7);
    cout<<low<<endl<<high<<endl;
    return 0;
}