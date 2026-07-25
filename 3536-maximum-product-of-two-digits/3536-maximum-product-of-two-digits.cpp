class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;

        while(n){
            int dig = n%10;
            arr.push_back(dig);
            n /= 10;
        }
        sort(arr.begin(), arr.end());
        int m = arr.size();

        return arr[m-2]*arr[m-1];
        
    }
};