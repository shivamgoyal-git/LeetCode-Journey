class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

            int posMax = nums[n-1]*nums[n-2]*nums[n-3];
            int negMax = nums[0]*nums[1]*nums[n-1];

            int ans = max(posMax, negMax);

            return ans;

    }
};