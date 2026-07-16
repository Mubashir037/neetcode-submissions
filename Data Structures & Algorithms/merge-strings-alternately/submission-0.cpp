class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;int j=0;
        string out;
        while(i<word1.size() && j<word2.size())
        {
            out+=word1[i++];
            out+=word2[j++];

        }
        while(i<word1.size())
        {
            out+=word1[i++];;

        }
        while(j<word2.size())
        {
            out+=word2[j++];

        }
        cout<<out;

     return out;   
    }
};