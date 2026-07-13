class Solution {
public:
int firstMissingPositive(vector<int>& nums) {
        // Step 1: Sort the numbers
        sort(nums.begin(), nums.end());
        
        // Step 2: Start looking for 1
        int target = 1;
        
        // Step 3: Loop through and find matches
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                target++; // Found it! Now look for the next number.
            }
        }
        
        return target;
    }
//     int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//         map<int,int>fr;
//         for(int i=0;i<n;i++)
//         {
//             fr[nums[i]]++;
//         }
//         int min=nums[0];
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]<min)
//             {
//               min=nums[i];
//             }
//         }
//         vector<int>r;
//         for(auto &it:fr)
//         {
//             r.push_back(it.first);

//         }
//         for(int i=0;i<r.size();i++)
//         {
//             cout<<r[i]<<" ";
//         }
// int ok;
    
//     for(int i=0;i<r.size();i++)
//     {
//         if(r[i+1]!=min+1)
//         {
         
//             ok=(min+1);
//             break;
          
//             //return (min+1);
//         }
//         min++;

//     }
//        return ok; 

//     }
};