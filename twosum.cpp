#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int n,vector<int> book,int target)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
int a=book[i];
int more=target-a;
if(mpp.find(more)!=mpp.end()){
    return {mpp[more],i};
}
mpp[a]=i;
    }
    return {};
}
int main()
{
vector<int> arr={1,2,3,4,5,6,7};
int target;
cin>>target;
int n=arr.size();
vector<int> sums=twosum(n,arr,target);
for(auto it:sums)
{
    cout<<it<<endl;
}
}