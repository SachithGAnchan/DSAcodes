#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &arr){
    int n=arr.size();
    vector<int> pos,neg;
    for(int i=0;i<n;i++)
    {
    if(arr[i]>0)
    {
        pos.push_back(arr[i]);
    }
    else{
        neg.push_back(arr[i]);
    }

    }
    if(pos.size()>neg.size())
    {
        for(int i=0;i<neg.size();i++)
        {
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++)
        {
            arr[index]=pos[i];
                index++;
        
        }
    }
   else
    {
        for(int i=0;i<pos.size();i++)
        {
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=pos.size();i<neg.size();i++)
        {
            arr[index]=neg[i];
                index++;
        
        }
    }
    return arr;
}
int main()
{
    vector<int> arr={1,-2,-2,3,4,5};
    vector<int> ans=rearrange(arr);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
}

// vector<int> rearrange(vector<int> arr)
// {
//     int cnt=0;
//     int cnt2=1;
//     int n=arr.size();
//     vector<int> ans(n);
//     for(int i=0;i<n;i++)
//     {
//     if(arr[i]>0)
//         {
//         ans[cnt]=arr[i];
//         cnt+=2;
//         }
    
//     else
//     {
//     ans[cnt2]=arr[i];
//     cnt2+=2;
//     }
    
// }
// return ans;
// }