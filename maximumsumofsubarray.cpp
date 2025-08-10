#include<bits/stdc++.h>
using namespace std;
long long maximumsubarray(vector<int> arr)
{
    long long sum=0;
    long long maxi=-500;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
    sum+=arr[i];
    if(sum>maxi)
    {
        maxi=sum;
    }     
    if(sum<0){
        sum=0;
    }
}
   
    return maxi;
    
}
int main(){
    vector<int> arr={-1,-2,-3,-4,-5};
    int n=maximumsubarray(arr);
    cout<<n;
    }
