class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long k=0;
            for(int i=0;i<n;i++){
                k+=ceil((double)piles[i]/mid);
            }
            if(k<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;

    }
};
