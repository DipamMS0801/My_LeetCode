class Solution {
public:
    int reverse(int x) {
        long long  ans = 0;
        int rem = 0;
        
        while (x != 0) {
            rem = x % 10;
            x = x / 10;
            ans = rem + ans * 10;
        }
        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};