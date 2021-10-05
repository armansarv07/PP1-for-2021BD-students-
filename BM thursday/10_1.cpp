#include<iostream>
using namespace std;
int counter;
int main()
{
   int n,n2,count = 0;
   cin>>n;
   while(n--){
       cin>>n2;
       while(n2){
           if(n2%10==0){
               count++;
           }
           n2/=10;
       }
   } // Practice
   cout<<count;
    return 0;
}
