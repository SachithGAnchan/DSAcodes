#include<bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int>& arr, int k) {
    sort(arr.begin(),arr.end());
    vector<int> differ;
        for(int i=0;i<arr.size()-1;i++){
            int diff=arr[i+1]-arr[i];
            differ.push_back(diff);
        }
        int sum=0;
        int i=0;
        int cnt=0;
        while(sum<=k &&  i<differ.size()){
            sum+=differ[i];
            i++;
            cnt++;
        }
        return cnt;
    }
int main(){
    vector<int> arr={1,2,4};
    int k=5;
    int freq=maxFrequency(arr,k);
    cout<<freq;
}