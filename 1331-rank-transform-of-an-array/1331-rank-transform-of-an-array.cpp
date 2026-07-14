class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        int n = arr.size();
        sort(temp.begin(),temp.end());
        int rank =1;
        unordered_map<int,int>mp;

        for(int i=0; i<n; i++)
        {
            if(mp.find(temp[i]) == mp.end())
            {
                mp[temp[i]] = rank++;
            }
        }
        vector<int> ans(n);

        for(int i=0; i<n; i++)
        {
            ans[i] = mp[arr[i]];
        }

        return ans;
    }
};