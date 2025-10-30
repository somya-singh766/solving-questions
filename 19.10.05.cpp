class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        unordered_map<long long, int> prefixCount;
    long long sum = 0;
    int count = 0;

    for (int x : arr) {
        sum += x;

        // Case 1: subarray from start to current index
        if (sum == 0)
            count++;

        // Case 2: subarrays ending here with zero sum
        if (prefixCount.find(sum) != prefixCount.end())
            count += prefixCount[sum];

        // Store this prefix sum
        prefixCount[sum]++;
    }

    return count;
    }
};
