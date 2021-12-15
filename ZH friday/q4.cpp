#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int dots = n - 1;
    int stars = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < dots; j++) cout << ".";
        for(int j = 0; j < stars; j++) cout << "*";
        for(int j = 0; j < dots; j++) cout << ".";
        dots -= 1;
        stars += 2;
        cout << endl;
    }
    return 0;
}  

