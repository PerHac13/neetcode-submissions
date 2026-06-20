class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;

        for(const auto& s: strs){
            vector<int> cnt(26,0);
            for(char c: s) cnt[c-'a']++;

            string key = to_string(cnt[0]);
            for(int i=1;i<26;++i){
                key+='#'+to_string(cnt[i]);
            }

            mp[key].push_back(s);
        }

        for( const auto& [_, vi]: mp) ans.push_back(vi);

        return ans;
    
    }
};
