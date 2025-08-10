#include<bits/stdc++.h>
using namespace std;
int duplicates(vector<int> &arr,int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]!=arr[j])
{
    arr[i+1]=arr[j];
    i++;
}    
}
return i+1;
}
int main()
{
   vector<int> arr={1,2,2,3,3,3,4,4,5,5,6,7};
   int n=arr.size();
   int index=duplicates(arr,n);
   cout<<"elements="<<index<<endl;
   for(int i=0;i<index;i++)
   {
    cout<<arr[i]<<" ";
       }
}