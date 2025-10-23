class Solution {
  public:
  bool canPlaceCows(vector<int> &stalls, int k, int distance) {
    int count = 1;          // Place first cow
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= distance) {
            count++;
            lastPos = stalls[i];
        }
        if (count == k) return true; // All cows placed
    }
    return false;
}
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
       sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, k, mid)) {
            ans = mid;       // distance possible, try bigger
            low = mid + 1;
        } else {
            high = mid - 1;  // distance not possible, try smaller
        }
    }

    return ans; 
    }
};
