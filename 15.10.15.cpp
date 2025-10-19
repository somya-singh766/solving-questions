class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int> st;

    for (string token : arr) {
        if (token == "+" || token == "-" || token == "*" || token == "/" || token == "^") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int res = 0;

            if (token == "+") res = a + b;
            else if (token == "-") res = a - b;
            else if (token == "*") res = a * b;
            else if (token == "/")
               if (a * b < 0 && a % b != 0)
                  res = a / b - 1;
               else
                  res = a / b; // integer division
            else if (token == "^") res = pow(a, b); // exponentiation

            st.push(res);
        } else {
            // Convert string to int and push
            st.push(stoi(token));
        }
    }

    return st.top();
    }
};
