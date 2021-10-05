#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;

    int a[n];
    int result = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    
    for(int i = l - 1; i <= r - 1; i++){
        result += a[i];
    }

    cout << result << endl;
    return 0;
}