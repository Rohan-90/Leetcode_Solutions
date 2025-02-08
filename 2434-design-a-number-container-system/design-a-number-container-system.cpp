class NumberContainers {
public:
    unordered_map<int,int> mp;
    unordered_map<int, set<int>> storeInd;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
      if(mp.count(index)) {
        int prev = mp[index];
        storeInd[prev].erase(index);
        if(storeInd[prev].empty()) storeInd.erase(prev);
      }
        mp[index] = number;
        storeInd[number].insert(index);
      
    }
    
    int find(int number) {
        if(storeInd.count(number)) {
            return *storeInd[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */