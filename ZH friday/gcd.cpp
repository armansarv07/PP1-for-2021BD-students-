#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int cnt = 0;
    
    for(int i = 1; i <= max(n,m); i++)  {
        if(n % i == 0){
            cnt++;
        }
    }
    int a[cnt];
    int cnt1 = 0;
    for(int i = 1; i <= max(n,m); i++) {
        if(n % i == 0){
            a[cnt1] = i;
            cnt1++;
        }
    }
    
    return 0;
}

