#include<bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
    if(dividend==divisor)return 1;
    int sign=1;
    if(dividend>=0 && divisor<0)sign=-1;
    if(dividend<0 && divisor>0)sign=-1;
    long long n=abs(dividend);
    long long d=abs(divisor);
    long long ans=0;
    while(n>=d){
        int cnt=0;
        while(n>=(d<<(cnt+1))){
            cnt++;
        }
        ans+=(1<<cnt);
        n=n-(d*(1<<cnt));
    }
    if(ans>=INT_MAX && sign==1)return INT_MAX;
        if(ans>=INT_MIN && sign==0)return INT_MIN;

    return (ans*sign);

}
int main(){
    int dividend=22;
    int divisor=3;
    int num=divide(dividend,divisor);
    cout<<num;
}