class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq[26] = {0};

    // Count frequency
    for (char c : s) {
        freq[c - 'a']++;
    }

    int maxFreq = 0;
    char maxChar = 'a';

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = 'a' + i;
        }
        
    }

    return maxChar; 
    }
};
