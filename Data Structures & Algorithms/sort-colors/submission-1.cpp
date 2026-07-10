class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<(int)nums.size()-1;i++)
        {
            int j=nums.size();
            while(j-- > i + 1)
            {
                if (nums[j]<nums[i])
                {
                    swap(nums[j],nums[i]);
                }
            }


        
    }
    }
};