class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        int i = 0;
        for (int num : nums){
            int need = target - num;
            if (seen.count(need)) {
                return {seen[need], i};
            }
            seen[num] = i;
            i++;
        }
        return {};
        
    }
};
