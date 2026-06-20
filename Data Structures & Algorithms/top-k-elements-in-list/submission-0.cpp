class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        vector<vector<int>> freqBucket(nums.size()+1);
        vector<int> ans;

        for(int n: nums){
            ++cnt[n];
        }

        for(const auto& [f,s]: cnt){
            freqBucket[s].push_back(f);
        }


        for(int i = freqBucket.size()-1; i>0; --i){
            for(int n: freqBucket[i]){
                ans.push_back(n);
                if(ans.size()==k) return ans;
            }
        }

        return ans;
    }
};
