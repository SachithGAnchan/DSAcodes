#include<bits/stdc++.h>
using namespace std;
void sorts(vector<int> &a){
    int n=a.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(a[mid],a[high]);
            high--;
        }
    }

}
int main()
{
    vector<int> arr={1,0,0,1,0,1,0,2,2,0,2};
    sorts(arr);
    for(auto it:arr)
    cout<<it<<" ";
}