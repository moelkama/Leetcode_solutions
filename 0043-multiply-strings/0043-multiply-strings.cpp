class Solution {
public:
    char count(int& rest, char n1, char n2)
    {
        int res = rest + (n1 - 48) * (n2 - 48);
    
        rest = res / 10;
        // cout<<"-->"<<((res % 10) +48);
        return  res % 10 + 48;
    }
    string  ft_sum(string num1, string num2)
    {
        string  res;
        int rest = 0;
    
        while (!num1.empty() || !num2.empty())
        {
            if (!num1.empty())
            {
                rest += num1.back() - 48;
                // cout<<"nu1::"<<num1.back()<<endl;
                num1.pop_back();
            }
            if (!num2.empty())
            {
                rest += num2.back() - 48;
                // cout<<"nu2::"<<num2.back()<<endl;
                num2.pop_back();
            }
            res.insert(0, 1, rest % 10 + 48);
            rest = rest / 10;
            // cout<<"rrrr::"<<(rest % 10 + 48)<<endl;
        }
        if (rest)
            res.insert(0, 1, rest + 48);
        return res;
    }
    string multiply(string num1, string num2) {
        string res = "0";
        int rest = 0;
        vector<string>  sums;
    
        while (!num2.empty())
        {
            sums.push_back(string());
            if (num2.back() == '0')
                sums.back() = "0";
            else
            {
                for (int i = num1.length() - 1; i >= 0; i--)
                    sums.back().insert(0, 1, count(rest, num2.back(), num1[i]));
            }
            if (rest)
                sums.back().insert(0, 1, rest + 48);
            rest = 0;
            num2.pop_back();
        }
        for (int i = sums.size() - 1; i >= 0 ; i--)
        {
            if (sums[i][0] != '0')
                sums[i].insert(sums[i].end(), i, '0');
            cout<<"list["<<i<<"]="<<sums[i]<<endl;
            res = ft_sum(res, sums[i]);
        }
        return res;
    }
};