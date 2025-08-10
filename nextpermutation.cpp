#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> &arr)
{
    int index=-1;
    int n=arr.size();
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            index=i;
            break;
        }
    }
    if (index==-1)
    {
        reverse(arr.begin(),arr.end());
        return arr;
    }
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[index]<arr[i])
        {
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    return arr;
}
int main()
{
    vector<int> arr={5,4,3,2,1};
    vector<int> ans=reverse(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
}