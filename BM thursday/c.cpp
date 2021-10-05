#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b, c , d;
    int binaryReverse;
    
    a = n % 2;
    b = (n / 2) % 2;
    c = (n / 4) % 2;
    d = (n / 8) % 2;

    binaryReverse = (a * 8) + (b * 4) + (c * 2) + (d * 1);

    cout << binaryReverse << endl;

    return 0;
}