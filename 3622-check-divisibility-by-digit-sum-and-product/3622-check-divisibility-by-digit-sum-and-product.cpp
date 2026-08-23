class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int num = n;

        while (n) {
            int dig = n % 10;
            sum += dig;
            product *= dig;
            n /= 10;
        }
        int ans = num % (sum + product);

        if(ans ==0) return true;
        else return false;
    }
};