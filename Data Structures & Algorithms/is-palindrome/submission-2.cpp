class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        vector<char>v;
        for(int i=0;i<n;i++){
            if(!isalnum(s[i]))continue;
            v.push_back(tolower(s[i]));
        }
        
        int l=0, r=(int)v.size()-1;
        while(l<=r){
                if(v[l]==v[r]){
                    l++;
                    r--;
                }
                else return false;
        }
        return true;
    }
};
