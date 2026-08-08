class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int n=s.size();
        int left=0;
        int ans=0;
        int length=0;
        int maxi=INT_MIN;
        for(int right=0;right<n;right++){
            mp[s[right]]++;
            length=right-left+1;
            maxi=max(maxi, mp[s[right]]);
            if(length-maxi>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans, right-left+1);
        }
        return ans;
    }
};
