class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int >st(nums.begin(), nums.end());
        if(nums.size()!=st.size())return true;
        else return false;
    }
};