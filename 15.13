class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int n = nums.size();
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; i++) {
        int curr = nums[i];
        int tempMax = max(curr, max(maxProd * curr, minProd * curr));
        minProd = min(curr, min(maxProd * curr, minProd * curr));
        maxProd = tempMax;

        result = max(result, maxProd);
    }

    return result;
    }
};
