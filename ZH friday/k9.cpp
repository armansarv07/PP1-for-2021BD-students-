#include <iostream>
#include <vector>

using namespace std;

vector<int>v;
vector<int>areas;

int maxi(vector<int>v) {
    int maxx = INT8_MIN;
    
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++) {
        if(*it > maxx) maxx = *it; 
    }

    return maxx;
}

void printVector(vector<int>v) {
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
}

int main() {
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    
    for(int i = 1; i <= maxi(v); i++) {

        int area = 0;

        for(int j = 0; j < v.size(); j++) {
            if(v.at(j) < i) {
                areas.push_back(area);
                area = 0;
                continue;
            } 
            area += i;
        }
    }

    printVector(areas);

    cout << endl;

    cout << maxi(areas) << endl;

    return 0;
}