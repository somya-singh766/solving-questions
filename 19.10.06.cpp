class Solution {
public:
    int findMaxLength(vector<int>& nums) {
         unordered_map<int, int> firstIndex;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        // Convert 0 → -1
        sum += (nums[i] == 0 ? -1 : 1);

        if (sum == 0)
            maxLen = i + 1;  // whole subarray from start has equal 0 and 1

        if (firstIndex.find(sum) != firstIndex.end()) {
            maxLen = max(maxLen, i - firstIndex[sum]);
        } else {
            firstIndex[sum] = i; // store first occurrence of sum
        }
    }

    return maxLen;
    }
};
