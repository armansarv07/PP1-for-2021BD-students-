#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    int a[] = {14, 11, 15, 18, 12};
    sort(a, a + 5);
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
}