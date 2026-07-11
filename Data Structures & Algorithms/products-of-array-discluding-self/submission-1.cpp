class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        int pr=1;
        int zero_count=0;
        for(int i=0;i<n;i++)
        { 
            if(nums[i]!=0){
            pr=pr*nums[i];}
            else{
                zero_count++;
            }
            
        }
        vector<int>prr;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0){
                if(zero_count > 0)
                {
                    prr.push_back(0);

                }
                else{
            prr.push_back(pr/nums[i]);}
            }
            else{
                if(zero_count > 1) prr.push_back(0);
                else prr.push_back(pr);
            }
        }
        return prr;

    }
};