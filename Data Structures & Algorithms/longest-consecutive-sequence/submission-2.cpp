class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        unordered_set<int>st(nums.begin(), nums.end());
        int longest=1;
        for (int i=0;i<n;i++){
            if(st.find(nums[i]-1)==st.end()){
                int current=nums[i];
                int cnt=1;
                while(st.find(current+1)!=st.end()){
                    current++;
                    cnt++;
                }
            longest=max(longest,cnt);
            }
        }
        return longest;
    }
};
