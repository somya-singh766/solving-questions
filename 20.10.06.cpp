class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;  // stores indices
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            // Remove indices that are out of current window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            // Remove smaller elements (they’ll never be needed)
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // Add current index
            dq.push_back(i);

            // Add max to result when first window is complete
            if (i >= k - 1)
                result.push_back(nums[dq.front()]);
        }

        return result;
    }
};
