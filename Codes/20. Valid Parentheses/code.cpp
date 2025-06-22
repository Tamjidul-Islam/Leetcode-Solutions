class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
      unordered_set<char> sset = {'[', '{', '('};

        for (auto ch : s) {
            if (sset.count(ch)) st.push(ch);
            else {
                if (st.empty()) return false;

                char top = st.top();
                if ((top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']')) {
                    st.pop();
                    }
                    else return false;

            }
        }
        return st.empty();
    }
};
