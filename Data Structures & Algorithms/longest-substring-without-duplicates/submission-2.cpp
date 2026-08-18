class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> seen;
        int left = 0;
        int max = 0;

        for (int right = 0; right < s.size(); right++) {
            while (seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);

            int count = right - left + 1;

            if (count > max)
                max = count;
        }

        return max;
    }
};