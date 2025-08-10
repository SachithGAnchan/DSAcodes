#include<bits/stdc++.h>
using namespace std;
int second_largest(vector<int> &arr,int n)
{
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
                  slargest=largest;
            largest=arr[i];
      
        }
        else if(arr[i]<largest && arr[i]>slargest)
           {
            slargest=arr[i];
           }
    }
    return slargest;
}
int second_smallest(vector<int> &arr,int n)
{
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
                  ssmallest=smallest;
            smallest=arr[i];
      
        }
        else if(arr[i]>smallest && arr[i]<ssmallest)
           {
            ssmallest=arr[i];
           }
    }
    return ssmallest;
}
vector<int> getsecondorderelements(vector<int> arr,int n)
{
   int slargest=second_largest(arr,n);
    int ssmallest=second_smallest(arr,n);
   return {slargest,ssmallest};
}
int main()
{
vector<int> arr={1,2,3,4,5,6,7,8,9};
int n=arr.size();
vector<int> a=getsecondorderelements(arr,n);
for(auto i:a)
{
    cout<<i<<endl;
    

}
cout<<a[0];
}
