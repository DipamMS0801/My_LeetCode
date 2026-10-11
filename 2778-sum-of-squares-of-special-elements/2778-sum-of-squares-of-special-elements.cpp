class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>a;
        for(int i = 0; i < n; i++){
            if(n % (i+1) == 0){
                a.push_back(nums[i]);
            }
        }
        int n2 = a.size();
        int result = 0;
        for(int i = 0; i < n2; i++){
            result += a[i] * a[i];
        }
        return result;
    }
};