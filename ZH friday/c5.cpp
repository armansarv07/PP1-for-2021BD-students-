#include <iostream>
#include <string>
using namespace std;

int main() {
    string large, small;

    cin >> large >> small;

    int index; 
    int position = 0;

    while((index = large.find(small, position)) != string::npos) {
        cout << "YES" << endl;
        position = index + 1;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}

