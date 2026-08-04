class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int num = nums[0] + 1;
        for (int i = 1; i < nums.size(); i++) {

            while (nums[i] != num) {
                ans.push_back(num);
                num++;
            }
            num++;
        }
        return ans;
    }
};