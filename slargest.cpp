#include<bits/stdc++.h>
using namespace std;
int slargestelement(vector<int> &arr,int n)
{
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
         {
            slargest=arr[i];
         }
    }
    return slargest;
}
int main()
{
vector<int> arr={1,2,3,4,5,6,7};
int n=arr.size();
int largest=slargestelement(arr,n);
cout<<"largest="<<largest;
return 0;
}