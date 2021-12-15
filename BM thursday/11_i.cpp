#include <iostream>
#include <map>

using namespace std;
map<char, int> palindrome;

int main() {
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        palindrome[s[i]]++;
    }
    
    int count = 0;
    map<char, int>:: iterator it;
    for(it = palindrome.begin(); it != palindrome.end(); it++) {
        if(it->second % 2 != 0) count++;
    }

    string res = (count > 1) ? "JOJO" : "ZA WARUDO TOKI WO TOMARE";
    cout << res;
    return 0;
}