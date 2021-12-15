#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std; 

map<string, double> students;
// map<string, int> occurences;
vector< pair<string, double> > res;

bool cmp(pair<string, double> a, pair<string, double> b) {
    return a.second > b.second;
    if(a.second == b.second) {
        return a.first < b.first;
    }
}

int main() {
    int n; cin >> n;
    double total = 0;

    for(int i = 0; i < n; i++) {
        string name; double points;
        cin >> name >> points;
        total += points;

        students[name] += points;
        // occurences[name] += 1;
    }

    // cout << endl;
    // cout << endl;

    map<string, double>:: iterator it;
    
    for(it = students.begin(); it != students.end(); it++) {
        res.push_back(make_pair(it -> first , it ->second / total));
    }

    sort(res.begin(), res.end(), cmp);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i].first << " " << res[i].second * 100 << "%" << endl;
    }

    return 0;
}
