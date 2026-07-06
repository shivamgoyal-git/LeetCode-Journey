class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        vector<bool> removed(intervals.size(), false);

        for (int i = 0; i < intervals.size(); i++) {
            
            auto elementi = intervals[i];
            for (int j = 0; j < intervals.size(); j++) {
                
                if (i == j)
                    continue;

                auto elementj = intervals[j];

                if (elementi[0] <= elementj[0] && elementi[1] >= elementj[1]) {
                    removed[j] = true;
                }
            }            
        }
         int ans =0;
            for(auto x:removed)
            {
                if(!x) ans++;
            }
        return ans;
    }
};