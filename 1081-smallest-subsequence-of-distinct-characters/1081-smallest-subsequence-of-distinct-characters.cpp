class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> vis(26), num(26);
        for(char ch : s)
        {
            num[ch-'a']++;
        }

        string ans;
        for(char ch: s)
        {
            if(!vis[ch-'a'])
            {
                while(!ans.empty() && ans.back()>ch)
                {
                    if(num[ans.back()-'a']>0){
                        vis[ans.back()-'a'] =0;
                        ans.pop_back();
                    }
                    else{
                       break; 
                    }
                }
                vis[ch-'a'] =1;
                ans.push_back(ch);
            }
            num[ch-'a']--;

        }
        return ans;
    }
};