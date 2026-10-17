class Solution {
public:

    int getDSum(int num){
        int sum = 0;
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n= nums.size();

        vector<int> afterSorted(nums);

        auto lambda = [&](int num1, int num2){
            int num1DSum = getDSum(num1);
            int num2DSum = getDSum(num2);

            if(num1DSum != num2DSum){
                return num1DSum < num2DSum;
            }
            return num1 < num2; 
        };


        sort(begin(afterSorted), end(afterSorted), lambda);
        
        unordered_map<int, int> valToIdx;
        for(int i = 0; i < n; i++){
            valToIdx[nums[i]] = i;
        }

        int swapcount = 0;
        for(int i = 0; i < n; i++){
            int expval = afterSorted[i];
            int currval = nums[i];

            if(expval == currval)  continue;

            int idx = valToIdx[expval];
            
            nums[i] = expval;
            nums[idx] = currval;

            valToIdx[expval] = i;
            valToIdx[currval] = idx;

            swapcount++;
        }
        return swapcount;
    }
};