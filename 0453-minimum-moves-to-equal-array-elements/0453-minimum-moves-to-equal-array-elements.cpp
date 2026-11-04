class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min_ele = *min_element(begin(nums), end(nums));
        long long sum = accumulate(begin(nums), end(nums), 0LL);
        
        return sum - 1LL*n*min_ele;
    }
};