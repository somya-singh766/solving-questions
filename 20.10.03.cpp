class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> maxHeap; // max-heap for k smallest elements

    for (int num : arr) {
        maxHeap.push(num);
        if (maxHeap.size() > k)
            maxHeap.pop(); // remove largest among k+1 elements
    }

    return maxHeap.top();
    }
};
