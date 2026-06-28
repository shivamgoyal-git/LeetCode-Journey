class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans =1;

        for(int i=1; i<arr.size(); i++)
        {
            int diff = abs(arr[i]-ans);
            if(diff<=1)
            {
                ans = arr[i];
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};