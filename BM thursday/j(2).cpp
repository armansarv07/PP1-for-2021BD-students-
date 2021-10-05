#include <iostream>

#include <math.h>

using namespace std;

int main(){

    int n, z=0,max=0;

    cin>>n;

    int a[n];

    for (int i=0;i<n;i++){

        cin>>a[i];

        if (a[i]>max){

            max=a[i];

        }

    }

    int l=log10(max);

    for (int i=0;i<n;i++){

        for (int j=0;j<l;j++){

            if (a[i]%(10^(j+1))<10^j){

                z+=1; 

            }

        }

    }

    cout<<z;

    return 0;

}
