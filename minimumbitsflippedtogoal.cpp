#include<bits/stdc++.h>
using namespace std;
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        int cnt=0;

        for(int i=0;i<31;i++){
            if(ans&(1<<i)){
                cnt=cnt+1; 
            }
        }
        return cnt;
    }
int main(){
    int start=7;
    int goal=10;
    int cnt=minBitFlips(start,goal);
    cout<<cnt;

}