class Solution {
public:
    void solve(vector<int>& students) {
        if(!students.empty()){
            int a = students[0];
            students.erase(students.begin());
            students.push_back(a);
        } 
    }
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt = 0;
        while(students.size() != 0 && cnt < students.size()) {
            if(students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin()); 
                cnt = 0;     
            }
            else { 
                solve(students);
                cnt++;
            }   
            
        }
        return students.size();
    }
};