class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        // int i=0, j= nums.size()-1;

        // while(i<j){
        //     // if(nums[i])
        //     int sum = nums[i]+nums[j];
        //     if(sum==target) return {i,j};
        //     if(sum<target)++i;
        //     else --j;
        // }
        int n = nums.size();
        unordered_map<int,int> idx;

        for(int i=0;i<n;++i){
            if(idx.find(target-nums[i]) != idx.end()){
                return {idx[target-nums[i]], i};
            }
            idx[nums[i]]=i;
        }
        return {-1,-1};
    }
};
