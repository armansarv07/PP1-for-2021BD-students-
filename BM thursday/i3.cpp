#include <iostream>

using namespace std;

int main(){
    int n, left, right;

    cin >> n >> left >> right;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Sut' zadachi
    // int b[(right - left) + 1];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(i >= left - 1 || i < right){
            cout << a[(right - 1) - cnt++] << " ";
        }
        else{
            cout << a[i] << " ";
        }
    }
    return 0;
}
/*
cnt++{
    cnt = cnt;
    cnt = cnt + 1;
}
*/
