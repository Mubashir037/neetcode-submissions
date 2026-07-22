class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;  // ← Map is CREATED here
        
        for(int i = 0; i < nums.size(); i++) {
            // Check if number exists in map
            if(lastIndex.find(nums[i]) != lastIndex.end() && 
               i - lastIndex[nums[i]] <= k) {
                return true;
            }
            // ↓↓↓ THIS IS WHERE DATA IS STORED IN THE MAP ↓↓↓
            lastIndex[nums[i]] = i;  // ← STORES the number and its index
            // ↑↑↑ THIS IS WHERE DATA IS STORED IN THE MAP ↑↑↑
        }
        return false;
    }
};