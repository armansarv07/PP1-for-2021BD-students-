#include <iostream>
#include <set>

using namespace std;
set<int> retake;

int main() {
    // Input part
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        retake.insert(a[i]);
    }

    string res = (n == retake.size()) ? "YES" : "NO";
    cout << res << endl;
    return 0;
}