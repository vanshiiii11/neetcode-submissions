class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int n=s.size();
        int left=0;
        int ans=0;
        int maxi=INT_MIN;
        for(int right=0;right<n;right++){
            mp[s[right]]++;
            maxi=max(maxi, mp[s[right]]);
            if((right-left+1)-maxi>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans, right-left+1);
        }
        return ans;
    }
};
