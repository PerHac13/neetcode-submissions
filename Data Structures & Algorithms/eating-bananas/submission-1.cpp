class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1, r = *max_element(piles.begin(), piles.end());
        int ans = r;

        while(l<r){
            long long rate =   (r+l)/2;

            long long total = 0;

            for(int i =0;i<piles.size();++i){
                total += (piles[i]+rate-1)/rate;
            }

            if(total > h) {
                l = rate+1;
            }else{
                ans=rate;
                r=rate;
            }

        }
        return ans;
    }
};
