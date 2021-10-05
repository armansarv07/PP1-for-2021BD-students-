#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int counter = 0;

    while(n--){
        int number;
        cin >> number;
        if(number % 10 == 7) counter++;
    }

    cout << counter << endl;
    
    return 0;
}