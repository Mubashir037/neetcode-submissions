class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int f,s;
        for(int i=0;i<nums.size();i++)
        {
            for (int j=0;j<nums.size();j++)
            {
                if (nums[i]+nums[j]==target and i!=j)
                {
                    f=i;s=j;
                }
            }
        }
        set<int>s1;
        s1.insert(f);
        s1.insert(s);
        vector<int>ans(s1.begin(),s1.end());
       
        return ans;
        
    }
};
