#include<bits/stdc++.h> 
using namespace std;
int findsubarray(vector<int> arr,int k){
    map<int,int> mpp;
    int xr=0;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        xr=xr^arr[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
    vector<int> arr{4,2,2,6,4};
    int k=6;
    int cnt=findsubarray(arr,k);
    cout<<cnt;
}