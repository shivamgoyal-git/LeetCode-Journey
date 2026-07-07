class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum =0;
        int x=0;
        int i=0;
        while(n!=0)
        {
            int dig = n%10;
            if(dig!=0)
            {
                sum += dig;
                x = x + dig* pow(10,i);
                i++;
            }
            n /=10;
        }
        return (long long)x*sum;
    }
};