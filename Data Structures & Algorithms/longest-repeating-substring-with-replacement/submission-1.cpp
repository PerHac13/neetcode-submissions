class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> cntf;

        int maxf=0, l=0, res=0;

        for(int r=0;r<s.size();++r){
            ++cntf[s[r]];

            maxf = max(cntf[s[r]], maxf);

            while((r-l+1)-maxf > k){
                cntf[s[l]]--;
                ++l;
            }         

            res=max(res,r-l+1);
        }
        return res;
        
    }
};
