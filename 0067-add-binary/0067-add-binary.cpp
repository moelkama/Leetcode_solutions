class Solution {
public:
    int to_int(char c)
    {
        if (c == '1')
            return 1;
        return 0;
    }
    string addBinary(string a, string b) {
        int     res = 0;
        int     a_n;
        int     b_n;
        string  str;
    
        while (a.length() || b.length())
        {
            a_n = 0;
            b_n = 0;
            if (a.length())
            {
                a_n = this->to_int(a.back());
                a.pop_back();
            }
            if (b.length())
            {
                b_n = this->to_int(b.back());
                b.pop_back();
            }
            if ((a_n + b_n + res) % 2 == 1)
                str.insert(str.begin(), '1');
            else
                str.insert(str.begin(), '0');
            res = (a_n + b_n + res) / 2;
        }
        if (res)
            str.insert(str.begin(), '1');
        return str;
    }
};