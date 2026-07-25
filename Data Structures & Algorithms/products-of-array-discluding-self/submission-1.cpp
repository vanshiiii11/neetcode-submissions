class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> output(n);

        int cnt0 = 0;
        int cnt0i = 0;

        int prod = 1;

        for(int i=0;i<n;i++){

            if(nums[i]==0){
                cnt0++;
                cnt0i=i;
            }
            else{
                prod*=nums[i];
            }
        }

        if(cnt0>1)
            return vector<int>(n,0);

        if(cnt0==1){

            for(int i=0;i<n;i++)
                output[i]=0;

            output[cnt0i]=prod;

            return output;
        }

        for(int i=0;i<n;i++){
            output[i]=prod/nums[i];
        }

        return output;
    }
};