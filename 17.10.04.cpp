// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 1, right = n;  // use long long to avoid overflow
        
        while (left < right) {
            long long mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                right = mid;  // first bad version is mid or before
            } else {
                left = mid + 1; // first bad version is after mid
            }
        }
        
        return left; 
    }
};
