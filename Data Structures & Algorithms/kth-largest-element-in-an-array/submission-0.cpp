class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            return nums[n-k];
        }
        
    }
};
