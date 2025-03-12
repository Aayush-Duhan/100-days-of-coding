vector<int> largestPermutation(int k, vector<int> arr) {
    int n = arr.size();
    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) {
        pos[arr[i]] = i;
    }
    
    for (int i = 0; i < n && k > 0; i++) {
        int max_val = n - i;  
        if (arr[i] == max_val) {
            continue; 
        }
        int max_pos = pos[max_val];
        swap(arr[i], arr[max_pos]);
        pos[arr[max_pos]] = max_pos;
        pos[arr[i]] = i;
        
        k--;
    }
    
    return arr;
}
