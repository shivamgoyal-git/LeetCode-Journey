class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans =0;
        for(string pt : patterns)
        {
            if(word.find(pt) != string::npos)
            {
                ans++;
            }
        }
        return ans;
    }
};