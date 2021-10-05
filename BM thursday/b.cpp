#include <iostream>

using namespace std;

int main(){
    int first, second;
    cin >> first >> second;

    int secondFirst, secondThird;

    secondFirst = second / 100; // 123 / 100 = (1.23) -> 1
    secondThird = second % 10; // 123 % 10 = 3

    cout << first + secondFirst + secondThird << endl;
    return 0;
}