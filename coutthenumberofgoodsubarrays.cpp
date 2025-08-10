#include<bits/stdc++.h>
using namespace std;
int howmanypairs(int val){
    int cnt=0;
    if(val==1){
        return 0;
    }
    if(val==2){
        return 1;
    }
    for(int i=3;i<=val;i++){
        cnt+=i;
    }
    return cnt;
}
int findnofgoodsubarray(vector<int> arr,int k){
    int n=arr.size();
    int cnt=0;
    int cntofgood=0;
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                mpp[arr[j]]++;
        }
                for(auto it:mpp){
                    cnt+=howmanypairs(it.second);
                    
                }
                if(cnt>=k)
                {
                    cntofgood++;

                }
                cnt=0;
        
               
            
        mpp.clear();
    }
    return cntofgood;
}
int main(){
    vector<int> arr={3,1,4,3,2,2,4};
    int k=2;
    int a=findnofgoodsubarray(arr,k);
    cout<<a;
}