#include <iostream>

using namespace std;

int main(){
    int n; // size of an array
    cin >> n; // giving value to an array

    int a[n]; // declaring array with size of n;

    for(int i = 0; i < n; i++){ // loop over till i equals to n - 1
        cin >> a[i]; // giving values to each element of an array
    }

    //Solution

    int counter = 0; // declaring counter to count zeros

    for(int i = 0; i < n; i++){
        while(a[i] != 0){
            if(a[i] % 10 == 0) counter++; // if condition satisfies counter increases
            a[i] /= 10; // reducing one integer from number
        }
    }

    cout << counter << endl; // iuput result

    return 0;
}