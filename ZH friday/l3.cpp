#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n ,m;

    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }

    //Solution

    

    int i = 0, j = 0;

    while(i != n && j != m){
        if(a[i] <= b[j]){
            cout << a[i] << " ";
            i++;
        }
        
        if(b[j] <= a[i]){
            cout << b[j] << " ";
            j++;
        }
    }

    for(int x = i; x < n; x++){
        cout << a[x] << " ";
    }

    for(int y = j; y < m; y++){
        cout << b[y] << " ";
    }

    return 0;
}

