#include<bits/stdc++.h>
using namespace std;
int missing(vector<int> &nums)
{
    int n=nums.size();
int sum=(n*(n+1))/2;
int s2=0;
for(int i=0;i<n-1;i++)
{
    s2+=nums[i];
}
return (sum-s2);
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        }
    int missed=missing(arr);
       cout<<missed;

}

// int missing(vector<int> &nums)    //using XOR
// {
// int xor1=0;
// int xor2=0;
// int n=nums.size()-1;
// for(int i=0;i<nums.size();i++)
// {
//     xor2=xor2^nums[i];
//     xor1=xor1^(i+1);
// }xor1=xor1^nums.size();
// return xor1^xor2;
// }