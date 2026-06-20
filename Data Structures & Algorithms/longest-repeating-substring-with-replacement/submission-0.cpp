class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> cnt;

        int res=0;
        int l=0, mxf=0;

        for(int r=0; r<s.size();++r){
            cnt[s[r]]++;
            mxf= max(mxf, cnt[s[r]]);

            while((r-l+1)-mxf>k){
                cnt[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }

        return res;
    }
};
