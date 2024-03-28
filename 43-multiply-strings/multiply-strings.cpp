class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size();
    vector<int> result(n1 + n2, 0); // Intermediate results

    // Multiply each digit of num2 with each digit of num1
    for(int i = n1 - 1; i >= 0; i--) {
        for(int j = n2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1]; // Add to the current position

            result[i + j + 1] = sum % 10; // Place the digit
            result[i + j] += sum / 10; // Carry
        }
    }

    // Convert result to string
    string ans = "";
    for(int num : result) {
        if(!(ans.empty() && num == 0)) { // Skip leading zeros
            ans += to_string(num);
        }
    }

    if (ans.empty()) return "0";
    return ans;
    }
};