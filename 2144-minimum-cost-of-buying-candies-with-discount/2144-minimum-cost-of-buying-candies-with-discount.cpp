class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end());
        int TotalCost = 0;

        for (int i = n - 1; i >= 0; i--) {
            int num = 2;
            while (i >= 0 && num > 0) {
                TotalCost += cost[i];
                i--;
                num--;
            }
        }
        return TotalCost;
    }
};