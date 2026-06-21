class Solution {
    vector<int> curr;
    vector<vector<int>> ans;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        dfs(nums, target, 0);
        return ans;
    }

    void dfs(vector<int>& nums, int t, int i){
        if(t==0){
            ans.push_back(curr);
            return;
        }
        if(t<0)return;
        for(int j=i;j<nums.size();++j){
            curr.push_back(nums[j]);
            dfs(nums, t-nums[j], j);
            curr.pop_back();
        }
    }
};
