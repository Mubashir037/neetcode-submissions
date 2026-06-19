class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ss;
        unordered_map<char,int>tt;
        for(auto &i:s)
        {
            ss[i]++;
        }
        for(auto &j:t)
        {
            tt[j]++;
        }
        if(ss==tt)
        {
            return true;
        }
        return false;



    }
};
