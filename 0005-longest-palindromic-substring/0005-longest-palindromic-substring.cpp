class Solution {
public:
    bool    isPalindrome(string s)
    {
        while (!s.empty())
        {
            if (s.front() != s.back())
                return false;
            s.pop_back();
            if (!s.empty())
                s.erase(s.begin());
        }
        return true;   
    }
    string longestPalindrome(string s) {
        string  res;
        string  palindrom;
        size_t  search_from;
        size_t  pos;
    
        while (!s.empty())
        {
            search_from = s.length() - 1;
            pos = s.find_last_of(s[0], search_from);
            while (pos != string::npos)
            {
                palindrom = s.substr(0, pos + 1);
                if (this->isPalindrome(palindrom))
                {
                    if (palindrom.length() > res.length())
                        res = palindrom;
                    break;
                }
                pos = s.find_last_of(s[0], pos - 1);
            }
            s = s.substr(1);
        }
        return res;
    }
};