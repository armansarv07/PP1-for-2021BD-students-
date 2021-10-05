#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int maxi = INT_MIN;
   
    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        if(maxi < number) maxi = number;
    }

    cout << maxi << endl;
    return 0;
}