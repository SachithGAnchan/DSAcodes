#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& nums,int val){
//     vector<int> arr1;
//     for(int i=0;i<arr.size();i++){
//         int j=0;
//         if(arr[i]!=val){
//             while(j<6){
//             arr1[j]=arr[i];
//             j++;
            
//             }
//         }
//     }
//     int* a =new int[arr1.size()];
// for (size_t i = 0; i < arr1.size(); ++i) {
//     a[i] = arr1[i];
// }
// int n=arr1.size();
// return arr1,n;
int k=0; 
    
for (int i=0;i<nums.size();i++){
    if (nums[i]!=val) {
        nums[k]=nums[i];
        k++;
    }
}

return k;
}
int main(){
    vector<int> nums={3,2,2,3};
    int k=3;
   
    int n=find(nums,k);
    for(int i=0;i<n;i++){
        cout<<nums[i];

    }
    cout<<n;
}