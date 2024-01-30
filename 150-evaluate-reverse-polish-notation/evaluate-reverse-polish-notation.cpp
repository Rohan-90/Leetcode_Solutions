class Solution {
public:
    long solve(int b, int a, char symbol){
        if(symbol == '+') return a + b;
        else if(symbol == '-') return a - b;
        else if(symbol == '/') return a / b;
        else if(symbol == '*') return (long)a * b;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i].size() == 1 && tokens[i][0] < 48){
                long num1 = st.top();
                st.pop();
                long num2 = st.top();
                st.pop();
                string optor = tokens[i];
                long ans = solve(num1, num2, optor[0]);
                st.push(ans);
            }
            else st.push(stol(tokens[i]));
        }
        return st.top();
    }
};