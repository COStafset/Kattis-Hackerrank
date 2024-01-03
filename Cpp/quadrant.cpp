#include <iostream>
using namespace std;
int main() {
    
    int x, y;
    cin >> x >> y;
    
    bool xpos = 0;
    bool ypos = 0;
    
    if(x>0){
        xpos = 1;
        }
    if(y>0) {
        ypos = 1;
    }
    int quadrant = 0;
    
    if(xpos==1 && ypos == 1 ) {
        quadrant = 1;
    }
    else if(xpos==1 && ypos == 0) {
        quadrant = 4;
    }
    else if(xpos==0 && ypos ==1) {
        quadrant = 2;
    }
    else if(xpos==0 && ypos ==0) {
        quadrant = 3;
    }
    
    cout << quadrant;
    return 0;
}