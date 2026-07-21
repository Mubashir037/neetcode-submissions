class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      int n=people.size();
      sort(people.begin(),people.end());
      int j=n-1;
      int out=0;
      int i=0;
      while(i<j)
      {
        if(people[i]+people[j]<=limit)
        {
          out++;
          i++;
          j--;
        }
        else{
          out++;
        j--;
        
        
        }
      
      }
      if(i==j) out++;
      return out;

    }
};