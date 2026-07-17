class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>sol;
        
       for(int i=0;i<numbers.size();i++)
       {
        for(int j=numbers.size()-1;j>0;j--)
        {
            if(numbers[j]+numbers[i]==target)
            {
                sol.push_back(i+1);
                sol.push_back(j+1);
                return sol;

            }
        }
       }
        return sol;
        
    }
};
