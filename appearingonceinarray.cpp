#include<bits/stdc++.h>
using namespace std;
int appearonce(vector<int> &nums)
{
    int xorr=0;
    for(int i=0;i<nums.size();i++)
    {
        xorr=xorr^nums[i];

    }
    return xorr;
}
int main()
{
vector<int> nums={1,2,2,3,3};
int appear=appearonce(nums);
cout<<appear;
}