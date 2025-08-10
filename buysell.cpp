#include<bits/stdc++.h>
using namespace std;
int buysell(vector<int> & arr)
{
    int profit=0;
    int mini=arr[0];
    int cost=0;
    for(int i=1;i<arr.size();i++)
    {
        cost=arr[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,arr[i]);

    }
    return profit;
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    int profit=buysell(arr);
    cout<<profit;
    
}