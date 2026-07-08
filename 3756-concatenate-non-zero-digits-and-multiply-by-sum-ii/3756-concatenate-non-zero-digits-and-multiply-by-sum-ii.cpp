class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        const int MOD = 1000000007;
        int n = s.size();

        vector<long long> pow10(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }

        vector<int> prefSum(n + 1, 0);
        vector<int> cnt(n + 1, 0);
        vector<long long> prefx(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int dig = s[i] - '0';
            prefSum[i + 1] = prefSum[i];
            cnt[i + 1] = cnt[i];
            prefx[i + 1] = prefx[i];

            if (dig != 0) {
                prefSum[i + 1] += dig;
                cnt[i + 1]++;
                prefx[i + 1] = (prefx[i] * 10 + dig) % MOD;
            }
        }

        vector<int> ans;
        for (auto q : queries) {
            int l = q[0], r = q[1];
            int k = cnt[r + 1] - cnt[l];
            long long sum = prefSum[r + 1] - prefSum[l];

            long long x =
                (prefx[r + 1] - (prefx[l] * pow10[k]) % MOD + MOD) % MOD;

            ans.push_back((x * sum) % MOD);
        }
        return ans;
    }
};