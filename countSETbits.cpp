#include<bits/stdc++.h>
using namespace std;
// int countsetbits(int n){
//     int cnt=0;
//     while(n>1){
//         cnt+=(n&1);        //(n&1) is an odd check for the right most bit of n ie set or not if set then add it
//         n=n>>1;              //this is dividing n by 2;
//     }
//     cnt+=(n&1);
//     return cnt;
// }
int countsetbits(int n){
    int cnt=0;
    while(n!=0){
        n=(n&(n-1));        //  it will set the rightmost set bbit to 0in every step
        cnt++;
    }
    return cnt;
}

int main(){
    int n=3;
    int cnt=countsetbits(n);
    cout<<cnt;
}