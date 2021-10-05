#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool isEven = (n % 2 == 0) ? true : false;

    cout << isEven << endl;

    return 0;
}