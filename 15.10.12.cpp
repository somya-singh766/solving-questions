class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

       
        for (int i = nums.size() - 1; i >= 0; i--) {
            int num = nums[i];

            
            while (!st.empty() && st.top() <= num)
                st.pop();

            
            if (st.empty())
                nextGreater[num] = -1;
            else
                nextGreater[num] = st.top();

            
            st.push(num);
        }

        
        vector<int> result;
        for (int num : findNums) {
            result.push_back(nextGreater[num]);
        }

        return result;
    }
};
