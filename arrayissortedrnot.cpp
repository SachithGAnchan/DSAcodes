#include<bits/stdc++.h>
using namespace std;
bool sortornot(vector<int> &arr,int n)
{
    bool sorted=true;
    for(int i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
         sorted=false;
        }
    }
    return sorted;

}
int main()
{
vector<int> arr={1,2,3,4,5,6,7,8};
int n=arr.size();
bool sort=sortornot(arr,n);
cout<<sort;
}

