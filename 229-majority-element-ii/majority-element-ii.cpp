class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int cnt1 = 0;
        int cnt2 = 0;
        int el1;
        int el2;
        for(int i = 0; i < v.size(); i++){
            if(cnt1 == 0 && el2 != v[i]){
                cnt1 = 1;
                el1 = v[i];
            }
            else if(cnt2 == 0 && el1 != v[i] ){
                cnt2 = 1;
                el2 = v[i];
            }
            else if(el1 == v[i]) cnt1++;
            else if(el2 == v[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
	    vector<int> ans;
		cnt1 = 0;
		cnt2 = 0;  // do a manual check 
		for(int i = 0; i < v.size(); i++){
			if(el1 == v[i]) cnt1++;
			if(el2 == v[i]) cnt2++;
		}
		int mini = (int)(v.size()/3) + 1;
		if(cnt1 >= mini) ans.push_back(el1);
		if(cnt2 >= mini) ans.push_back(el2);
		return ans;
    }
};