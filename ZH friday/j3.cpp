#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] == x){
            cout << i + 1;
            return 0;
        }
        
    }

    if(x < a[0]){
        cout << 0 << endl;
        return 0;
    }
    else if(x > a[n - 1]){
        cout << n << endl; 
        return 0;
    }
    else{
        for(int i = 0; i < n; i++){
            if(a[i] > x){ cout << i << endl; return 0;}
        }
    }
    return 0;
}

// sorted: 1 , 2 , 3 , 4  ,10 ,11