class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mpp;
        int ans=0;
        int cnt=0;
        int left=0;
        int maxi=0;
        for(int right=0;right<s.size();right++){
            mpp[s[right]]++;
            cnt=right-left+1;
            maxi=max(maxi,mpp[s[right]]);
            if(cnt-maxi>k){
                mpp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
        
    }
};
