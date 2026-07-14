class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //sort(prices.begin(),prices.end());
        int c=0;
        for(int i=0;i<prices.size()-1;i++)
        {
          if(prices[i+1]-prices[i]>0){  
          c+=prices[i+1]-prices[i];}
            
        }
        return c;
    }
};