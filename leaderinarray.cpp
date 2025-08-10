#include<bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &arr)
{
   
    int n=arr.size();
    vector<int> ans;
    ans.reserve(n);
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=maxi)
        ans.push_back(arr[i]);
        maxi=max(arr[i],maxi);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<int> arr={10,22,12,3,0,6};
   vector<int> ans= leader(arr);
   for(auto it: ans){
    cout<<it<<" ";
   }
}