#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> divisors(int n, int m) {
    vector<int> out;
    for(int i = 1; i <= min(n, m); i++) {
        if(n % i == 0 && m % i == 0) out.push_back(i);
    }
    return out;
}

void printVector(vector<int>v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    cout << divisors(n, m)[k - 1] << endl;
    printVector(divisors(n, m));
    return 0;
}