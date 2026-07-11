class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int>fr;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            fr[nums[i]]++;
        }
        vector<pair<int, int>> vec(fr.begin(), fr.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; 
    });
        vector<int> maxi;
        int i=0;
        for (auto &y:fr)
        {
            
            maxi.push_back(y.first);
            i++;
        }
        for (int i=0;i<vec.size();i++)
        {
            cout << vec[i].first << " " << vec[i].second << "\n";
        }
        vector<int>max;
        int steps=0;
        for (int i=0;i<k;i++){

            if(steps==k)
            {
                break;
            }
            max.push_back(vec[i].first);
            steps++;



        }

        
        return max;

        // for (auto &y:fr)
        // {
        //    maxi.push_back(y.first);

            
        //     j++;
        //     if(j+1>=k)
        //     {
        //         break;
        //     } 
            
            
        // }
        return maxi;
        
    }
};
