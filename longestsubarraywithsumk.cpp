#include<bits/stdc++.h>
using namespace std;
// int hashedsubarray(vector<int> &arr,int k)
// {
//     map<long long,int> presummap;
//     long long sum=0;
//     int maxlen=0;
//     for(int i=0;i<arr.size();i++)
//     {
//         sum+=arr[i];
//         if(sum==k){
//             maxlen=max(maxlen,i+1);
//         }
//         long long rem=sum-k;
//         if(presummap.find(rem)!=presummap.end()){
//         int len=i-presummap[rem];
//     maxlen=max(maxlen,len);
//     }
//     if(presummap.find(sum)==presummap.end()){
//     presummap[sum]=i;

//     }

//         }
//         return maxlen;
//     }
int maxlength(vector<int> &arr,long long k)
{
    long long sum=arr[0];
    int left=0;
    int right=0;
    int maxlen=0;
    int n=arr.size();
    while(right<n)
    {
            while(left<=right && sum>k)
            {
              sum-=arr[left];
              left++;
            }
            if(sum==k){
                maxlen=max(maxlen,right-left+1);
            }
        
        right++;
        if(right<n) sum=sum+arr[right];
    }
    return maxlen;
}
int main()
{
    vector<int> arr={1,1,2,3,4,4,5,1,1,1,2};
    long long int k;
    cin>>k;
   int max=maxlength(arr,k);
cout<<max;
}



