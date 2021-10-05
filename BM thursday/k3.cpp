#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(i < n - 1){
            if(a[i] != a[i + 1]){
                cout << a[i] << " ";
            }
        }
    }
    cout << a[n - 1] << endl;
    return 0;
}
// 1  2  3 4 5 6

