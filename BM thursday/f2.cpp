#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long sum = 0;

    while(n != 0){
        sum += n;
        n--;
    }

    cout << sum << endl;
    
    return 0;
}