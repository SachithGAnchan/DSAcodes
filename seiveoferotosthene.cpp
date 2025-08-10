#include<bits/stdc++.h>
using namespace std;
int findcnt(int n){
    vector<int> isprime(n,1);
    for(int i=2;i<n;i++){
        if(isprime[i]==1){
            for(int j=(i*i);j<=n;j+=i){
                isprime[j]=0;
            }
        }
    }
    int cnt=0;
    for(auto it:isprime){
        cnt+=it;
    }
    return cnt;
}
int main(){
    int n=10;
    int cnt=findcnt(n);
    cout<<cnt;
}