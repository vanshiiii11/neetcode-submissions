class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int n=piles.size();
        while(low<=high){
            long long hr=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<n;i++){
                hr+=ceil((double)piles[i]/mid);
            }
            if(hr<=h){
                high=mid-1;
            }
            else low=mid+1;
            
        }
        return low;

    }
};
