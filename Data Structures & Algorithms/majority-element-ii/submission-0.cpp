class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        map<int,int>fr;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            fr[nums[i]]++;
        }
        for(auto &it:fr)
        {
            if(it.second>(n/3))
            {
                res.push_back(it.first);
            }
        }
        return res;
        
    }
};