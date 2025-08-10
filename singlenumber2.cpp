#include<bits/stdc++.h>
using namespace std;
    // int singleNumber(vector<int>& nums) {                //most optimal solution
    //     int single=0;
    //     int doubles=0;
    //     for(int i=0;i<nums.size();i++){              //conceptofbuckets
    //         single=(single^nums[i])&~doubles;
    //         doubles=(doubles^nums[i])&~single;
    //     }
    //     return single;
    // }
    // int singleNumber(vector<int>& nums) {
    //     int ans=0;                                  //brute : TC : O(32N)
    //     for(int bitind=0;bitind<32;bitind++){
    //         int cnt=0;
    //         for(int i=0;i<nums.size();i++){
    //             if(nums[i]&(1<<bitind))cnt=cnt+1;
    //         }
    //         if(cnt%3==1) ans=ans|(1<<bitind);
    //     }
    //     return ans;   //go through every numbers bit index and check if set bit appears 3 times if it it doesnt then there is a set bit

    // }
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=3){            //better then the above sollution but not better then bucket
            if(nums[i]!=nums[i-1])
            return nums[i-1];
        }
        return nums[nums.size()-1];
    }
int main(){
    vector<int> nums={1,1,1,2,3,3,3};
    int num=singleNumber(nums);
    cout<<num;

}