class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>fr;
        vector<int>dupli;
        vector<int>ok;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            fr[nums[i]]++;
        }
        for(auto &it:fr)
        {
            ok.push_back(it.first);
            if(it.second==1)
            {
                
                
            
                k++;
            }
            else{
                dupli.push_back(it.first);
            }
        }
        for(int i=0;i<dupli.size();i++)
        {
            int num=dupli[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==num)
                {
                    nums.erase(nums.begin()+j);
                }
            }
        }
        
        nums=ok;
        for(int i=0;i<ok.size();i++)
        {
            cout<<ok[i]<<" ";
        }

        return nums.size();
        
    }
};