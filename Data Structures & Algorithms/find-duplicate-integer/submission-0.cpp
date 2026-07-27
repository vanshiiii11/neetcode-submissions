class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>freq(nums.size()+1,0);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>1)return i;
        }
        return -1;
    }
};
