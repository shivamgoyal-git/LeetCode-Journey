class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) //even
        {
            return n;
        }
        return n*2;
    }
};