class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            unordered_map<int, int> m;
            for(int j=i; j<nums.size(); j++){
                m[nums[j]]++;
                res += m.size() * m.size();
            }
        }
        return res;
    }
};