#include <stack>
#include <string>
#include <vector>

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        path = path + "/";
        string curr;

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (curr == ".." && !st.empty()) st.pop();
                else if (curr != "" && curr != "." && curr != "..") st.push(curr);
                curr = "";

                // Skip consecutive slashes
                while (i + 1 < path.size() && path[i + 1] == '/') {
                    i++;
                }
            } else {
                curr += path[i];
            }
        }

        vector<string> segments;
        while (!st.empty()) {
            segments.push_back(st.top());
            st.pop();
        }

        reverse(segments.begin(), segments.end());

        string ans = "/";
        for (const string& segment : segments) {
            ans += segment + "/";
        }

        // Handle the case where the simplified path is empty
        if (ans.size() > 1) {
            ans.pop_back(); // Remove the trailing '/'
        }

        return ans;
    }
};
