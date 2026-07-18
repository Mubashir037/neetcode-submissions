class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int steps=0;
        for(int i=0;i<k;i++)
        {
            if(steps==k){break;}
            nums.insert(nums.begin(),nums[nums.size()-1]);

            nums.pop_back();
            steps++;
            
        }

       


          
        
        
    }
};