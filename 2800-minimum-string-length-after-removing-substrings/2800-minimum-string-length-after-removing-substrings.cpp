class Solution {
public:
    int minLength(string s) {
        stack<char> stack;

        for (int i = 0; i < s.length(); i++) {
            char current = s[i];

            if (stack.empty()) {
                stack.push(current);
                continue;
            }

            if (current == 'B' && stack.top() == 'A') {
                stack.pop();
            }
            else if (current == 'D' && stack.top() == 'C') {
                stack.pop();
            }
            else {
                stack.push(current);
            }
        }

        return stack.size();
    }
};