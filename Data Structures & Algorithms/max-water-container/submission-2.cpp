class Solution {
public:
    int maxArea(vector<int>& heights) {
        int m=-999;
        for(int i=0;i<heights.size() ;i++)
        {
          for(int j=i+1;j<heights.size();j++)
          {
            int area=min(heights[i],heights[j])*(j-i);
            if(area>m)
            {
              m=area;
            }
          }
          

        }
        return m;
       
       

        
       


       
       
      

        
        
    }
};
