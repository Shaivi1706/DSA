//set will be used 
//property of set is that it only stores unique element

vector<int> findUnion(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s;
    for (int x : nums1) s.insert(x);
    for (int x : nums2) s.insert(x);
    
    vector<int> result(s.begin(), s.end());
    sort(result.begin(), result.end()); 
    return result;
}
