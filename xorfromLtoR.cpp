#include<bits/stdc++.h>
using namespace std;
int xorofn(int n){
        if(n%4==1)return 1;
    else if(n%4==2)return n+1;
    else if(n%4==3)return 0;
    else return n;
}
int ltor(int l,int r){
    int left=xorofn(l-1);
    int right=xorofn(r);
    return left^right;
}
int main(){
    int l=5;
    int r=7;

    int num=ltor(l,r);
    cout<<num;
}