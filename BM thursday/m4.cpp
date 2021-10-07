#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            a[i][j] = 0;
        }
    }

    int i = 0, j = 0;
    int cnt = 1;
    int side = 1;
    a[0][0] = 1;
    while(cnt != n*n){
        if(side == 1){
            if(!a[i][j + 1] && j + 1 < n){ // a[i][j + 1] == 0
                cnt++;
                a[i][j + 1] = cnt;
                j++;
            }
            else{
                side = 2;
            }
        }
        if(side == 2){
            if(!a[i + 1][j] && i + 1 < n){
                cnt++;
                a[i + 1][j] = cnt;
                i++;
            } 
            else{
                side = 3;
            }
        }
        if(side == 3){
            if(!a[i][j - 1] && j - 1 >= 0){
                a[i][j - 1] = ++cnt;
                j--;
            }
            else{
                side = 4;
            }
        }
        if(side == 4){
            if(!a[i - 1][j] && i - 1 >= 0){
                a[i - 1][j] = ++cnt;
                i--;
            }
            else{
                side = 1;
            }
        }
        // cout << i << " " << j << "\n";
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}