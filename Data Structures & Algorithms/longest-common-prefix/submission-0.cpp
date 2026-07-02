class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if (n == 0) return "";
        string desired=strs[0];
        for(int i=1;i<n;i++)
        { 
            string str=strs[i];
            string temp="";
            for (int k=0;k<str.size() && k<desired.size();k++)
            {
                if (str[k]==desired[k])
                {
                    temp+=str[k];
                }
                else{
                    break;
                }
            }
            desired = temp;
        }
        return desired;
    }
};