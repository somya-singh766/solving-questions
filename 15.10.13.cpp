vector<int> Smallestonleft(int arr[], int n) {
    // code here
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= arr[i])
            st.pop();

        if (!st.empty())
            ans[i] = st.top();
        else
            ans[i] = -1;

        st.push(arr[i]);
    }

    return ans;
}
