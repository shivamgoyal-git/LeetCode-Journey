class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if (n < 9)
            return n;
        int push = 0;
        int itr = 1;
        for (int i = n; i > 0;) {
            int count = 8;
            while (count>0 && i>0) {
                push = push + itr;
                count--;
                i--;
            }
            itr++;
        }

        return push;
    }
};