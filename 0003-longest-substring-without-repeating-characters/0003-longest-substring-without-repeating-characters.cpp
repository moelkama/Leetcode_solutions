class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string  buffer = "";
        int     max = 0;

        if (s.size())
            max = 1;
        while (s.size() > 0)
        {
            for (size_t i = 0; i < s.size(); i++)
            {
                if (buffer.find(s[i]) == string::npos)
                    buffer.push_back(s[i]);
                else
                {
                    if (buffer.length() > max)
                        max = buffer.length();
                    buffer = "";
                    break;
                }
            }
            s = s.substr(1);
        }
        return max;
    }
};
