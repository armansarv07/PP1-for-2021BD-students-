#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    string answer = (n % 2 == 1 || (n % 2 == 0 && n >= 6 && n <= 20))? "Super" : "Not Super";
    cout << answer;
    return 0;
}