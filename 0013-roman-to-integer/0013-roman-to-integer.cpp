class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
    
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == 'I')
                res += 1;
            else if (s[i] == 'V')
            {
                res += 5;
                if (i - 1 >= 0 && s[i - 1] == 'I')
                    res -= 2 * 1;
            }
            else if (s[i] == 'X')
            {
                res += 10;
                if (i - 1 >= 0 && s[i - 1] == 'I')
                    res -= 2 * 1;
            }
            else if (s[i] == 'L')
            {
                res += 50;
                if (i - 1 >= 0 && s[i - 1] == 'X')
                    res -= 2 * 10;
            }
            else if (s[i] == 'C')
            {
                res += 100;
                if (i - 1 >= 0 && s[i - 1] == 'X')
                    res -= 2 * 10;
            }
            else if (s[i] == 'D')
            {
                res += 500;
                if (i - 1 >= 0 && s[i - 1] == 'C')
                    res -= 2 * 100;
            }
            else if (s[i] == 'M')
            {
                res += 1000;
                if (i - 1 >= 0 && s[i - 1] == 'C')
                    res -= 2 * 100;
            }
        }
        return res;
    }
};