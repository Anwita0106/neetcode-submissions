class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap; 

        for (int stone : stones) {
            maxHeap.push(stone);
        }
        while (maxHeap.size() > 1) {
            int first = maxHeap.top();
            maxHeap.pop();
            int second = maxHeap.top();
            maxHeap.pop();

            int diff = first - second;
            if (diff > 0) {
                maxHeap.push(diff);
            }
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};