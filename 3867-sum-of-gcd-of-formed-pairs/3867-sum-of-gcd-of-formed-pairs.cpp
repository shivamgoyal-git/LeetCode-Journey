class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>mx(n);
        vector<int>prefixGcd(n);
        int maxNum = INT_MIN;

        for(int i=0; i<n; i++)
        {
            maxNum = max(maxNum,nums[i]);
            mx[i] = maxNum;
            prefixGcd[i] = gcd(nums[i],mx[i]);
        }

        sort(prefixGcd.begin(), prefixGcd.end());
        
        int s=0, e=n-1;
        long long sum =0;

        while(s<e)
        {
            sum += gcd(prefixGcd[s],prefixGcd[e]);
            s++;
            e--;
        }

    return sum;
    }
};