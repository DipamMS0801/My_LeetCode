class Solution {
public:
    int mirrorDistance(int n) {
        int rem = 0, rev = 0, orig = n;
        while( n > 0 ){
            rem = n % 10;
            n = n / 10;
            rev = rev*10 + rem;
        }
        return abs(orig-rev);
    }
};