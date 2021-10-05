#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    string result;
    bool checkSquare = false;

    for(int j = 1; j * j <= n; j++){
        if(j * j == n){
            checkSquare = true;
        }
    }

    result = (checkSquare)? "Yes" : "No";

    cout << result << endl;
}

