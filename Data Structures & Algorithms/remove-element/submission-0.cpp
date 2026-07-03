class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int n=nums.size();
        vector<int>ex;
        for (int i=0;i<n;i++)
        {
            if (nums[i]!=val)
            {
                k++;
                ex.push_back(nums[i]);
            }
            
        }
        for (int i=0;i<ex.size();i++)
        {
            nums[i]=ex[i];
        }

        
        return k;
        }
};
        