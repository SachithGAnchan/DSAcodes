class Solution {
    public:
        int longestConsecutive(vector<int>& arr) {
                int n=arr.size();
        if(n==0)
        {
            return 0;
        }
        int longest=0;
        unordered_set<int> st(arr.begin(),arr.end());
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt=1;
                int x=it;    //x because if further we are gonne modify this value so it shuldnt coincide with the loop
                while(st.find(x+1)!=st.end())
                {
                    x=x+1;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        
        }
        return longest;
        }
    };