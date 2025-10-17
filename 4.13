class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};  // frequency array for numbers 1–100

    // Step 1: Count frequencies
    for (int num : nums)
        freq[num]++;

    // Step 2: Find maximum frequency
    int maxFreq = 0;
    for (int i = 1; i <= 100; i++)
        if (freq[i] > maxFreq)
            maxFreq = freq[i];

    // Step 3: Count total elements with maximum frequency
    int total = 0;
    for (int i = 1; i <= 100; i++)
        if (freq[i] == maxFreq)
            total += freq[i];

    return total;
    }
};
