class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap_max;
        for(int weight : stones){
            heap_max.push(weight);
        }
        while(heap_max.size() > 1){
            int x = heap_max.top();heap_max.pop();
            int y = heap_max.top();heap_max.pop();
            if(x!=y){
                heap_max.push(x-y);
            }
        }
        if (heap_max.empty()) return 0;
        else return heap_max.top();
    }
};
