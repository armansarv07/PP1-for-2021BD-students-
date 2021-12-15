#include <iostream>
#include <map>

map<string, int>scoreList;

using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string s; int score; cin >> s >> score; // Input
        scoreList[s] += score;
    }

    return 0;
}