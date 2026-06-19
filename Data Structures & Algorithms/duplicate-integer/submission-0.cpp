class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         unordered_map<int, int>num;
         for(int x:nums)
         {
            num[x]++;
         }
         for(auto &y:num)
         {
            if(y.second>1)
            {
                return true;
            }
         }
         return false;
        
    }
};