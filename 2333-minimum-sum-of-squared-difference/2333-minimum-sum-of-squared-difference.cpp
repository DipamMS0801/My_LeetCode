class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();

        vector<int> CountDiff(1e5+1, 0);
        for(int i = 0; i < n; i++){
            int d = abs(nums1[i] - nums2[i]);
            CountDiff[d]++;
        }

        int K = k1 + k2;

        for(int currDiff = 1e5; currDiff > 0 && K > 0; currDiff--){
            int countOps = min(CountDiff[currDiff], K);

            CountDiff[currDiff] -= countOps; //currDiff-1
            CountDiff[currDiff-1] += countOps;
            K -= countOps;
        }

        long long result = 0;
        for(int long long d = 1; d <= 1e5; d++){
            result += (1LL * CountDiff[d] * d * d);
        }
        return result;
    } 
};