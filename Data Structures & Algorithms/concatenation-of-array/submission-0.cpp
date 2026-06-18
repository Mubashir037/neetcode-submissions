class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int z=3;
        for (int i=0;i<2*n;i++)
        {
            if (i<n)
            {
                ans.push_back(nums[i]);

            }
           
            
        }
        for (int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};