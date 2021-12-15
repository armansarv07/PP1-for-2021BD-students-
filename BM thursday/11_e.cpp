#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<set<char> > characters;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        set<char> chars;
        for(int j = 0; j < s.size(); j++) {
            chars.insert(s[j]);
        }
        characters.push_back(chars);
    }

    set<char> first;
    first = characters[0];

    for(int i = 1; i < n; i++) {
        set<char>:: iterator it;
        for(it = first.begin(); it != first.end(); it++) {
            set<char> :: iterator its;
            for(its = characters[i].begin(); its != characters[i].end(); its++) {
                
            }
        }
    }
    return 0;
}