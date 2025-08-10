    // int singleNumber(vector<int>& nums) {
    //     int single=0;
    //     int doubles=0;
    //     for(int i=0;i<nums.size();i++){              //conceptofbuckets
    //         single=(single^nums[i])&~doubles;
    //         doubles=(doubles^nums[i])&~single;
    //     }
    //     return single;
    // }