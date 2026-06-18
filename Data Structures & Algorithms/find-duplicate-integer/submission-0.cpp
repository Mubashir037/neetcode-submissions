class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[i]==nums[j])
                {
                    cout<<nums[i]<<endl;
                    return nums[i];
                }
            }
        }
        
    }
};
