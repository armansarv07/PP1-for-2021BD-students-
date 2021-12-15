#include <iostream>

using namespace std;

bool met;

int main() {
    int n, m; cin >> n >> m;

    bool map[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    } 

    int count = 0;
    int global = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(map[i][j]) met = true;
            if(!map[i][j]) met = false;
            if(!met && !map[i][j]) count++;
            if(met && map[i][j]) global += count;

        }  
    } 

    cout << count  << endl;
    return 0;
}