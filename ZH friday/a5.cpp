#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string line;

    cin >> line;
    int cntSmall = 0, cntCapital = 0;

    for(int i = 0; i < sizeof(line) / sizeof(char); i++){
        if(isupper(line[i])){
            cntCapital++;
        }else if(islower(line[i])){
            cntSmall++;
        }
        // cout << int(line[i]) << endl;
    }

    cout <<cntSmall << " " << cntCapital  << endl;
    return 0;
}

