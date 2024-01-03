#include <iostream>
using namespace std;


int main() {

    int pawn, rook, knight, bishop, queen, king;
    cin >> king >> queen >> bishop >> knight >> rook >> pawn;
    
    cout << 1 - king << " " << 1 - queen << " " << 2 - bishop << " " << 2 - knight << " " << 2 - rook << " " << 8 - pawn;
    return 0;
}