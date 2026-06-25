class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i; j < n; j++) {
                if(nums[j]== target)
                {
                    count += 1;
                }
                int arrLen = j-i+1;
                if(count*2>arrLen)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};