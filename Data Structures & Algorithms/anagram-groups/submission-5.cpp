// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<vector<int>,vector<string>>mp;
//         for(int i=0;i<strs.size();i++){
//             vector<int>freq(26,0);
//             for(char c: strs[i]){
//                 freq[c-'a']++;
//             }
//             mp[freq].push_back(strs[i]);

//         }
//         vector<vector<string>>res;
//         for(auto it: mp){
//             res.push_back(it.second);
//         }
//         return res;
//     }
// };
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mappp;
        for(string s: strs){
            string key=s;
            sort(key.begin(), key.end());
            mappp[key].push_back(s);
        }
        vector<vector<string>>res;
        for(auto it: mappp){
            res.push_back(it.second);
        }
        return res;
    }
};