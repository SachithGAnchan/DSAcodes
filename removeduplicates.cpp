#include<bits/stdc++.h>
using namespace std;
int duplicates(vector<int> &arr,int n)
{
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    } 
    int index=0;
    for(auto it:st)
    {
       arr[index++]=it;

    }
    return index; 
}
int main()
{
vector<int> arr={1,1,3,3,2,2,7,3,5,6};
int n=arr.size();
int index=duplicates(arr,n);
cout<<index<<endl;
for(int i=0;i<index;i++)
{
    cout<<arr[i]<<endl;
}
}
