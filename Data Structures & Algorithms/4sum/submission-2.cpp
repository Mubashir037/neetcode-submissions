class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>sl;
        sort(nums.begin(),nums.end());
        set<vector<int>>s1;
        int n=nums.size();
                for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    for(int z=k+1;z<nums.size();z++)
                    {
                        if((long long)nums[i]+nums[j]+nums[k]+nums[z]==target){
                            if(i!=j && j!=k && k!=z && i!=z ){
                                if((i>=0 && j>=0 && k>=0 && z >=0) && (i < n && j <n && k<n && z<n) ){
                            s1.insert({nums[i],nums[j],nums[k],nums[z]});}}
                            //sl.push_back({nums[i],nums[j],nums[k],nums[z]});
                        }
                    }

                }
            }
        }
        for (const auto &it : s1) { 
    for (int num : it) {
        cout << num << " ";
    }
    cout << endl; // New line after each vector
}
        for(auto &it:s1)
        {
            sl.push_back(it);
        }

        return sl;
        
    }
};