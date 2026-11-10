class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqmap;
        priority_queue<pair<int, int>> max_heap;
        for(int num :  nums){
            freqmap[num] += 1;
        }

        for (auto& [num, count] : freqmap){
            max_heap.push({count, num});
        }

        vector<int> result;
        while(k > 0){
            result.push_back(max_heap.top().second);
            max_heap.pop();
            --k;
        }
        return result;
    }
};
