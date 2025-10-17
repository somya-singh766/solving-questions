class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        bool present1[1001] = {false};
    bool present2[1001] = {false};

    // Mark elements present in nums1
    for (int num : nums1)
        present1[num] = true;

    // Mark elements present in nums2
    for (int num : nums2)
        present2[num] = true;

    // Find common elements
    vector<int> result;
    for (int i = 0; i <= 1000; i++) {
        if (present1[i] && present2[i])
            result.push_back(i);
    }

    return result;
    }
};
