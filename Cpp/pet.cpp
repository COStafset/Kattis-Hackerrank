#include <iostream>

using namespace std;

int main()
{
    int contestant, n1, n2, n3 , n4, resultCurr, resultMax, contestP;
    for(int i = 0; i< 5; i++){
        contestant++;
    cin>>n1>>n2>>n3>>n4;
    resultCurr = n1+n2+n3+n4;
    if(resultCurr > resultMax) {
        resultMax = resultCurr;
        contestP = contestant;
    }
    }
    cout<<contestP<<" "<<resultMax;
}