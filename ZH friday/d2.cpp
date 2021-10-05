#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;


    float sides = n * 2;

    if(n <= k){
        cout << 2 << endl;
    }else{
        cout << ceil(sides / k) << endl; 
    }

    return 0;
}

