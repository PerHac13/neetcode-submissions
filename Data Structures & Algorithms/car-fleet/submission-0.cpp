class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int,int>> ps;

        for(int i =0; i<n; ++i){
            ps.push_back({position[i], speed[i]});
        }

        sort(ps.rbegin(), ps.rend());

        int fleets = 1;

        double prevTime = (double)(target - ps[0].first)/ ps[0].second;

        for(int i =1; i<n; ++i){
            double currTime = (double)(target - ps[i].first)/ ps[i].second;

            if(currTime > prevTime){
                fleets++;
                prevTime = currTime;
            }
        }

        return fleets;
    }
};
